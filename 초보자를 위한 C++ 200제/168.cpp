//168
//for_each 반복문 사용하기(표준)
#include <iostream>
#include <vector>
#include <algorithm> //for_each를 사용하기 위해 include

using namespace std;

int main()
{
	vector<int> data({ 10,20,30,40 }); //정수형 벡터를 선언하고 10, 20, 30, 40으로 초기화한다.

	cout << "== for_each 람다 ==" << endl;

	for_each(data.begin(), data.end(), [](int i) //for_each는 앞선 비표준 for each처럼 배열 범위를 인자로 사용하며 추가로 컨테이너와 람다 문법을 응용할 수 있다. 첫 번째 두 번째 인자는 순화할 컨테이너의 시작과 끝니고 세번째 인자를 람다로 구성한다.
	{                                            //()사이의 int i는 순회하는 data벡터의 데이터를 인자로 받는다.
		cout << i << ", ";
	});

	cout << endl << "== for_each 람다 함수1 ==" << endl;

	auto Print = [](int x) { cout << x + x << ", "; }; //정수형 인자를 반환하는 람다 함수를 선언한다.

	for_each(data.begin(), data.end(), Print); //15번 라인과는 다르게 이미 선언된 람다 함수를 이용한다. 동작원리는 15번 라인과 똑같다. 인자로 사용할 람다 함수는 함수 내부에 선언해도 되고 외부에 선언해도 된다.

	cout << endl << "== for_each 람다 함수2 ==" << endl;

	int y = 11;

	for_each(data.begin(), data.end(), [y](int x) { cout << x + y << ", "; }); //24번 라인의 축약형이다. for_each에 세 번째 인자인 람다 함수를 직접 구성해도 된다. 일반적으로 람다로 구현할 코드 양이 적다면 30버 라인처럼 선언과 함께 구현 코드를 함께 적는 것이 가독성 측면에서 도움이 된다.

	cout << endl;

	return 0;
}

/*
for each와는 다르게 for_each는 C++ 표준에 포함되어 있다. for each는 컨테이너를 사용할 수 없는 등 비표준이라 거의 사용되지 않지만 std::for_each는 표준인데다가 사용 방법도 다양해 유용하게 사용할 수 있다.
*/