//120
//함수 오버로딩 이해하기
#include <iostream>
#include <string>

using namespace std;

int Plus(int arg1, int arg2) //인다로 정수 2개를 받아 더한다. 그리고 그 값을 리턴한다.
{
	return arg1 + arg2;
}

double Plus(double arg1, double arg2, double arg3) //인자로 실수 3개를 받아 더한다. 그리고 그 값을 리턴하는데 9번에 선언된 함수와 이름이 똑같다.
{
	return arg1 + arg2 + arg3;
}

int main()
{
	int number1 = Plus(2, 4); //오버로딩된 Plus 함수를 각각 호출하여 반환 값을 변수에 저장한다. 반환형과 인자 형태가 다르기 때문에 이처럼 똑같은 이름의 함수를 선언하며 사용할 수 있다.
	double number2 = Plus(3.4, 5.7, 8.4);

	cout << "number1 : " << number1 << endl;
	cout << "number2 : " << number2 << endl;

	return 0;
}

/*
어떤 프로그래밍 언어든 유효 범위 안에선 함수 이름을 중복하여 사용할 수 없다.
하지만 인자나 리턴값이 다르다면 같은 이름의 함수를 선언하여 사용할 수 있다.
이것을 함수 오버로딩이라 부르며 매우 유용하게 사용할 수 있다.

오버로딩의 특징은 함수 이름이 같고, 인자 종류와 개수가 다르며, 리턴값 또한 다르다.
*/