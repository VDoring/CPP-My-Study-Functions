//171
//조건에 맞는 요소가 있는지 검사하기(any_of)
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool EvenOdd(int arg) //인자로 받은 정수가 짝수라면 true를 리턴하는 함수이다.
{
	return arg % 2 == 0 ? true : false;
}

int main()
{
	vector<int> data = { 8,27,35,49 }; //정수형 벡터를 선언하며 8, 27, 35, 49로 초기화한다.

	if (any_of(data.begin(), data.end(), EvenOdd)) //data 벡터를 인자로 사용하며 조건은 함수 EvenOdd로 대체합니다. 만약 data에 짝수가 하나라도 존재한다면 20번 라인이 수행된다.
		cout << "data : 짝수가 존재합니다" << endl;

	if (any_of(data.begin(), data.end(), [](int i) {return i < 10; })) //data 벡터와 람다를 사용한다. data에 10보다 작은 수가 하나라도 있다면 23번 라인이 수행된다.
		cout << "data : 10보다 작은 수가 있습니다" << endl;

	return 0;
}

/*
any_of 함수는 all_of 함수와 사용 방법은 비슷하지만 의미는 다르다.
any_of 함수는 컨테이너 요소 중 하나라도 조건에 맞다면 true를 리턴한다.
*/