//190
//모든 숫자 찾기(regex_search)
#include <iostream>
#include <vector>
#include <regex>
#include <string>

using namespace std;

int main()
{
	regex re(R"(\d+)"); //모든 숫자를 찾는 정규표현식
	const string str = "12 34ab 56 cd78__ !9 10 ==11"; //숫자를 찾아볼 문자열을 선언한다.

	vector<string> result; //찾아낸 숫자를 저장할 벡터를 선언한다.
	auto start = str.begin(); //while문을 사용하는데 필요한 문자열의 시작 위치를 저장한다.
	auto end = str.end(); //while문을 사용하는데 필요한 문자열의 끝 위치를 저장한다.

	smatch match_info; //찾은 결과를 저장할 smatch 변수를 선언한다.

	while (regex_search(start, end, match_info, re)) //regex_search가 검색할 내용이 없을 떄까지 while문이 반복된다. 첫 번쨰 인자는 검색할 문자열의 시작 위치, 두 번쨰 인자는 검색할 문자열의 종료 위치, 세 번째 인자는 결과를 저장할 smatch, 네 번쨰 인자는 정규표현식이다.
	{
		result.push_back(match_info.str()); //정규표현식으로 찾아낸 결과는 문자열로 변환하여 벡터 result에 저장한다.
		start = match_info[0].second; //이터레이터 start는 second를 계속 참조하므로 start가 참조할 문자열이 없어질 때까지 while문이 반복된다. (smatch의 구조에 관한것은 맨 밑의 라인 참조.)
	}

	for (auto i : result) //모든 숫자 검색 결과를 출력한다.
		cout << i << ", ";

	return 0;
}

/*
이 예제에서 사용할 메타 문자)
\d : 숫자를 찾는다.
*/

/*
smatch의 구조)

[0] - 항상 이 위치에 결과 값을 저장
[0].matched - 값을 찾았으면 true, 못 찾으면 false
[0].first - 검색에 이용한 전체 문자열
[0].second - matched가 true라면 결과값에서 first 문자열을 제외한 나머지 문자열

예)
matched = true
first - "12 34ab 56 cd78__ !9 10 ==11"
second - "34ab 56 cd78__ !9 10 ==11"

*/