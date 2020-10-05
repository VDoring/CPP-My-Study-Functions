//169
//구간 지정 for문 사용하기
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> data({ 10,20,30,40 }); //정수형 벡터를 선언하고 10,20,30,40으로 초기화한다.

	cout << "== for, iterator ==" << endl;

	for (auto i = data.begin(); i != data.end(); ++i) //일반적인 for문에서 컨테이너를 사용하는 예이다. 앞선 예제에서도 이미 다뤘던 코드이다.
		cout << *i << ", ";

	cout << endl << "== range based for loop ==" << endl;

	for (const auto i : data) //14번 라인에 비래 코드양이 줄었다. 구간 지정 for문은 begin, end 함수를 보유한 데이터 타입의 시작과 끝을 모두 순회하여, 해당 값을 auto i에 할당한다. 자료형과 컨테이너는 :을 이용해 구분한다.
		cout << i << ", ";

	cout << endl << "== range based for loop ==" << endl;

	for (auto &i : data) //19번 라인과 비슷하지만 주소를 참조해 값을 수정한다. data 컨테이너의 모든 값에 2를 더한다.
		cout << i + 2 << ", ";

	cout << endl;

	return 0;
}

/*
구간 지정 for문은 컨테이너를 조금 더 편리하게 사용할 수 있다.
반복자 iterator을 리턴하는 begin, end 함수를 보유한 데이터 타입이라면 구간 지정 for문에서 사용할 수 있다.
*/