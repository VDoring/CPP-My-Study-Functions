//189
//첫 번쨰 결과만 변경하기(regex_replace)
#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main()
{
	regex re1(R"(\S)"); //공백 문자가 아닌 것을 찾는 정규표현식
	regex re2(R"(\t)"); //Tab(탭)을 찾는 정규표현식
	string str = "i	like    coding";

	string result1 = regex_replace(str, re1, "[$&]", regex_constants::format_first_only); //앞 예제와 사용 방법이 비슷하지만, regex_constants::format_first_only라는 옵션이 추가되었다. 이 라인에서는 처음 찾아낸 문자를 []로 감싼다.
	string result2 = regex_replace(str, re2, "(Tab)", regex_constants::format_first_only); //format_first_only 옵션을 추가하면 처음 찾아낸 결과만 수정하고 중단한다. 이 라인에서는 \t를 찾아 문자열 (Tab)으로 교체한다.

	cout << "result1 : " << result1 << endl;
	cout << "result2 : " << result2 << endl;

	return 0;
}

/*
이 예제에서 사용할 메타 문자)
\S : 공백 문자가 아닌 것. 숫자, 문자, 특수문자 모두 검색 대상에 해당한다.
\t : Tab(탭)을 검색한다.
*/