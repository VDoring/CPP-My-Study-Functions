//183
//Not a Number(NAN) 확인하기(isnan)
#include <iostream>

using namespace std;

int main()
{
	double number1 = 1; //실수 선언
	double number2 = 0.4; //실수 선언
	double number3 = 0.0; //실수 선언, 0으로 초기화
	double number4 = 11.2; //실수 선언
	
	cout << boolalpha;
	cout << isnan(number1 / number4) << endl; //연산의 유효성을 검사. false
	cout << isnan(number2 / number3) << endl; //연산의 유효성을 검사. false
	cout << isnan(number3 / number3) << endl; //연산의 유효성을 검사. true
	cout << isnan(number4 / number1) << endl; //연산의 유효성을 검사. false
	//(0 나누기 0은 정상적인 연산이 아니기 때문에 false가 리턴된다.)
	
	return 0;
}

/*
NaN은 Not A Number의 약자로 자바스크립트 웹프로그래밍에서도 자주 사용한다.
C++에서는 isnan 함수를 이용해 연산 과정이 정상인지 판단할 수 있다.
*/
