//170
//조건에 모든 요소가 맞는지 검사하기(all_of)
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<int> data1 = { 1,3,5,7 }; //정수형 벡터 선언
	vector<string> data2 = { "ab", "cd", "ef" }; //문자열혈 벡터 선언

	if (all_of(data1.begin(), data1.end(), [](int i) {return i % 2; })) //data1의 시작과 끝 위치를 all_of 함수의 첫 번째, 두 번쨰 인자로 사용한다. 세 번쨰 인자는 람다를 이용해 특정 조건을 정의한다.
		cout << "data1 : 모두 홀수입니다" << endl;                      //data1의 모든 데이터를 정수를 2로 나눴을 때 모두 0을 리턴하면 짝수이다. 모든 데이터가 홀수이며 단 하나의 데이터도 짝수가 아니라면 16번 라인이 수행된다.

	if (all_of(data1.begin(), data1.end(), [](int i) {return i < 10; })) //data1의 모든 데이터가 10보다 작다면 19번 라인이 수행된다.
		cout << "data1 : 모두 10보다 작습니다" << endl;

	if (all_of(data2.begin(), data2.end(), [](string i) {return i.length() < 4 ? true : false; })) //data2의 모든 문자열 데이터 길이가 4보다 작다면 23번 라인이 수행된다. 문자열의 길이는 length 함수를 이용하여 알아낼 수 있다.
		cout << "data2 : 모두 길이가 4 이하입니다" << endl;

	if (all_of(data2.begin(), data2.end(), [](string i) {return i.find('A'); })) //data2의 모든 문자열에 대문자 A가 포함되어 있지 않다면 27번 라인이 수행된다. 문자열에서 문자를 찾을 땐 find 함수를 사용한다.
		cout << "data2 : 모두 문자 A를 포함하지 않습니다" << endl;

	return 0;
}

/*
all_of 함수는 컨테이너를 순회하며 모든 데이터가 특정 조건에 맞는지 확인하는 함수이다.
인자는 3개가 필요한데, 첫 번쨰는 컨테이너의 순회 시작 위치, 두 번쨰는 컨테이너의 순회 마지막 위치, 세 번째는 사용자 정의 조건이다.
*/