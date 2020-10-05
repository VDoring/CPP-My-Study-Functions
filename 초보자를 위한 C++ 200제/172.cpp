//172
//조건에 맞는 요소가 없는지 검사하기(none_of)
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<int> data = { 8,27,35,49 }; //정수형 벡터를 선언하며 8, 27, 35, 49로 초기화한다.

	bool is_small = any_of(data.begin(), data.end(), [](int i) {return i < 100; }); //data 벡터와 람다를 사용한다. data에 있는 모든 요소가 100보다 작아야 true가 리턴된다. 요소 중 하나라도 100보다 크다면 false가 리턴된다.

	bool is_zero = any_of(data.begin(), data.end(), [](int i) { return i != 0; }); //data에 있는 모든 요소가 0이 아니어야 true, 하나라도 0이라면 false가 리턴된다.

	if (is_small == true && is_zero) //data 요소가 모두 100보다 작거나 0이 아니라면 다음 라인이 수행된다.
		cout << "data 자료는 모두 100보다 작고 0이 아닙니다" << endl;

	return 0;
}

/*
none_of 함수는 컨테이너 요소 모두가 조건에 맞지 않아야 true를 리턴한다.
*/