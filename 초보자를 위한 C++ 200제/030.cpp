//030
//명시적 변환 이해하기( () )
#include <iostream>

using namespace std;

int main()
{
	int number1 = 65;
	double number2 = 23.4;

	int number3 = int(number2); //괄호() 안에 자료형을 넣어 명시적으로 변환하는 방법으로, int를 char로도 변경할 수 있다.
	double number4 = double(number1 / number2); //double로 명시적인 변환을 한다.

	char ch = char(number1); //int 정수는 char로도 표현되기 때문에 number1을 char로 명시적 변환한다. 아스키 코드에서 정수 65는 알파벳 대문자 A이다.

	cout << "number1 : " << number1 << endl;
	cout << "number2 : " << number2 << endl;
	cout << "number3 : " << number3 << endl;
	cout << "number4 : " << number4 << endl;
	cout << "ch : " << ch << endl;

	return 0;
}

/*
명시적으로 자료형을 변환하여 코딩을 조금 더 쉽게 할 수 있다.

*/