//193
//시작, 끝 문자로 문자열 찾기(regex_match)
#include <iostream>
#include <vector>
#include <regex>
#include <string>

using namespace std;

int main()
{
	vector<string> Korea = {
		"Republic of Korea",
		"republic of Korea, since 1945",
		"Republic of korea, since 1945",
		"republic of korea",
		"south Korea, since 1945",
		"south korea",
		"SOUTH KOREA, since 1945",
		"south Korea",
	};

	regex re("(SOUTH|south).*(1945)"); //첫쨰, 문자열은 SOUTH 또는 south로 시작해야 한다.
	                                   //둘째, 중간에 어떤 문자가 있든 상관없으며
	                                   //셋째, 문자열의 끝에는 1945가 있어야 한다.
	                                   //즉, SOUTH 또는 south 로 시작해서 1945로 끝나는 문자열을 찾아내는 것이다.
	smatch match_info;

	for (auto i : Korea) //검색 결과를 출력한다. regex_match 사용방법은 앞 예제와 똑같다.
	{
		if (regex_match(i, match_info, re))
			cout << match_info[0] << endl;
	}

	return 0;
}