//188
//문자열 일부 변경하기(regex_replace)
#include <iostream>
#include <regex> //정규표현식을 사용하기 위해 include
#include <string>

using namespace std;

int main()
{
	regex re1(R"(l|i|k|e)"); //문자 l, i, k, e를 찾는 정규표현식이다. 중간에 |를 구분자로 사용해 like 단어가 아닌 알파벳 l, i, k, e 4개를 나타낸다.
	regex re2(R"(\D)"); //숫자를 제외한 문자을 찾는 정규표현식이다.
	regex re3(R"(\s)"); //공백문자를 찾는 정규표현식이다.
	string str = "i like coding"; //정규표현식으로 특정 조건을 찾아볼 문자열을 선언한다.
	
	string result1 = regex_replace(str, re1, "[$&]"); //regex_replace 첫 번쨰 인자는 대상 문자열, 두 번째 인자는 정규표현식, 세 번째 인자는 변경할 형식이다. $&는 찾아낸 문자 또는 문자열을 불러온다는 뜻으로, 이 경우에는 알파벳 4개와 일치하는 부분의 앞 뒤로 []를 붙인다.
	string result2 = regex_replace(str, re1, "*"); //찾아낼 알파벳 l, i, k, e를 *로 변경한다.
	string result3 = regex_replace(str, re2, "_$&_"); //숫자를 제외한 모든 문자 앞뒤에 _를 붙인다.
	string result4 = regex_replace(str, re3, "(space)"); //공백문자를 찾아 (space)로 교체한다.
	
	cout << "result1 : " << result1 << endl;
	cout << "result2 : " << result2 << endl;
	cout << "result3 : " << result3 << endl;
	cout << "result4 : " << result4 << endl;
	
	return 0;
}

/*
이 예제에서 사용한 메타 문자
|  : or. 또는 이란 의미로 여러 조건을 사용할 떄 구분자로 사용한다.
\D : 숫자를 제외한 문자만을 대상으로 한다.
\s : 공백 문자만 대상으로 한다.
*/
