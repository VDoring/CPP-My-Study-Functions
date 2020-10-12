//187
//일치하는지 확인하기, 숫자 찾기(regex_match, regex_search)
#include <iostream>
#include <regex> //정규표현식을 사용하기 위해 include
#include <string>

using namespace std;

int main()
{
	regex re1(R"(\d+)"); //C++에서 정규표현식은 R"()" 형태로 표현하며, 실제 규칙은 () 안에 적는다. \d+란 숫자를 찾는데 한 자리가 아니라 여러 자리라는 뜻이다. \d는 숫자가 여러 번 반복된다는 의미이며, 이는 한 가지 이상을 뜻한다.
	string str1("1234"); //문자형 변수 선언
	
	bool is_match = regex_match(str1, re1); //문자열이 정규표현식과 일치하는지 검사한다. regex_match는 문자열과 규칙을 인자로 받아 문자열이 규칙에 부합한다면 true를 반환한다.
	
	cout << boolalpha;
	cout << "is_match = " << is_match << endl; //14번 라인의 결과를 출력한다. 결과는 정수로만 이루어진 문자열이라 true이다.
	
	regex re2(R"(\d+)"); //새로운 정규표현식을 선언한다.
	string str2 = "ab 123456 cd ef"; //새로운 문자형 변수를 선언한다.
	
	smatch match_info; //정규표현식과 일치하는 문자열을 찾으며, 찾아낸 문자열은 match_info 변수에 저장된다. 예제 실행 중에 +를 빼교 실행해보면 결과가 한 자리로 출력되는 것을 볼 수 있다.
	regex_search(str2, match_info, re2);
	
	cout << "number : " << match_info.str() << endl; //match_info에 결과값이 존재한다면 .str()함수를 이용해 문자열로 출력할 수 있다.
	
	return 0;
}

/*
정규표현식(regex)이란 어떤 규칙대로 문자열의 집합을 표시할 떄 사용한다.
복잡한 문자열에서 원하는 데이터만 추출하여 사용하기 위해 도입한 것으로 거의 모든 프로그래밍 언어에서 지원하고 있다.

이 예제에서 사용할 메타 문자>
\d : 검색 조건은 숫자로 한다.
+  : 앞의 조건을 1번 또는 여러 번 반복한다.
*/
