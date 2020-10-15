//191
//Go-로 시작하는 단어 찾기(regex-search)
#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main()
{
	string str = "Wang Geon, a descendant of Go-gu-ryeo nobility, deemed the nation as the successor of Go-guryeo";

	smatch match_info;

	regex re(" Go-([^ ]*)"); //첫째, Go-로 시작하는 모든 단어(또는 문자열)를 찾으며 둘째, Go-와 다음 공백 사이를 결과값으로 얻는다.

	while (regex_search(str, match_info, re)) //regex_search 함수에 문자열, 결과를 저장할 변수, 정규표현식을 인자로 전달한다.
	{                                         
		cout << match_info.str() << " " << endl;

		str = match_info.suffix().str(); //suffix는 앞선 예제에서 다뤘던 .second와 똑같다. 찾아낸 문자열을 제외한 나머지를 의미한다. 이렇게 계속 단어를 줄여가며 .suffix에 값이 없을 때까지 while문이 반복된다.
	}

	return 0;
}

/*
이 예제에서 사용할 메타 문자)

[]    : 괄호 사이의 문자를 찾는다.
^공백 : 공백을 제외한 모든 문자를 찾는다.
*/