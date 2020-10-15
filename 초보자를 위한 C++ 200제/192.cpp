//192
//R 또는 r로 시작하는 문자열 찾기(regex_match)
#include <iostream>
#include <vector>
#include <regex>
#include <string>

using namespace std;

int main()
{
	vector<string> Korea = { //R,r,S,s로 시작하는 문자열 8개를 벡터의 초기값으로 설정한다.
		"Republic of Korea",
		"republic of Korea",
		"Republic of korea",
		"republic of korea",
		"South Korea",
		"south korea",
		"South korea",
		"south Korea",
	};

	regex re("([Rr]epublic)\\s.*"); //정규표현식 의미는 문자열이 R 또는 r로 시작하며 다음 문자열은 epublic 이다. 이어서 공백이 있어야 한다. 만약 이 조건에 부합한다면 이어지는 문자들은 모두 결과에 해당한다.

	smatch match_info;

	for (auto i : Korea) //검색 결과를 출력한다. regex_match는 첫 번째 인자로 문자열, 두 번쨰 인자로 smatch, 세 번째 인자로 정규표현식을 전달 받는다.
	{
		if (regex_match(i, match_info, re))
			cout << match_info[0] << endl;
	}

	return 0;
}

/*
이 예제에서 사용할 메타 문자)

[xy] : 괄호 안의 모든 문자를 찾는다.
()   : 괄호 안의 내용은 하나의 그룹이 된다.
\    : 다음에 오는 메타 문자를 찾는다.
\s   : 공백 문자를 찾는다.
.    : 임의의 문자를 나타낸다.
*    : 앞 문자가 0개 이상 일치하는 문자열이다.

*/