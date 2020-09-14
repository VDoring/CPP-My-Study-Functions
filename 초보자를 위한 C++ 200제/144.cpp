//144
//constexpr 사용하기
#include <iostream>

using namespace std;

constexpr int GetNumber1() //constexpr 형태로 정수를 리턴하는 함수이다. 기능은 2라는 숫자를 리턴하지만 constexpr 키워드를 사용했기 때문에 19번 라인처럼 고정 크기가 필요한 곳에 사용할 수 있다.
{
	return 2;
}

constexpr int GetNumber2(int x, int y) //상수값이 필요한 곳에서 사용할 수 있도록 constexpr 키워드가 사용되었다. 두개의 정수를 받아 합을 리턴하는 함수이다.
{
	return x + y;
}

int main()
{
	int array1[GetNumber1()]; //C++11 미만에서는 오류가 발생하는 코드이다. 배열의 크기는 미리 결정되어야 하기 때문에 기존엔 함수의 반환값으로 배열 크기를 지정할 수 없었다. 하지만 컴파일 타임에 값이 결정되는 constexpr 함수의 반환값은 배열의 크기로 사용할 수 있다.
	int array2[GetNumber2(1, 2)];

	cout << sizeof(array1) << ", " << sizeof(array2) << endl; //arrat1에는 4바이트 int 정수 2개를 저장할수 있어 결과는 8이다.
	                                                          //array2에는 4바이트 int 정수 3개를 저장할 수 있어 결과는 12이다.

	return 0;
}

/*
const를 이용해 상수를 만들어 사용할 수 있지만 선언과 함께 값을 결정해야 하는 장점이자 단점이 존재한다.
하지만 constexpr은 컴파일 시점에 값을 결정하기 떄문에 const보단 유연하게 값을 결정하여 사용할 수 있다.
배열 또한 선언과 함께 크기를 지정해야 하는데 크기가 고정적이지 않을 수도 있다.
이런 경우에도 constexpr은 아주 좋은 해결책이 된다.
*/