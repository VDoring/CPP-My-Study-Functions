//047
//제곱근 구하기(sqrt)
#include <iostream>

using namespace std;

int main()
{
	cout << "4의 제곱근 : " << sqrt(4.0) << endl;
	cout << "16의 제곱근 : " << sqrt(16) << endl;
	cout << "64의 제곱근 : " << sqrt(64) << endl;
	cout << "256의 제곱근 : " << sqrt(256.0) << endl;
}

/*
제곱근 구하려면 sqrt()함수 사용.

x의 제곱근이란 제곱하여 x가 되는 실수를 의미한다.
4의 제곱은 16이기 때문에 sqrt()함수로 16.0을 전달하면 결과 값은 4가 출력된다.

C언어에서는 sqrt()함수를 사용할 떄 double 실수형으로 인자를 전달해야 한다.
하지만 C++은 실수, 정수 모두 받아 처리하기 때문에 혼용해도 문제는 없다.

*/