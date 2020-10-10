//182
//실수가 0이 아닌지 확인하기
#include <iostream>

using namespace std;

int main()
{
	double number1 = 1;
	double number2 = 0.4;
	double number3 = 0.0; //number3만 0으로 초기화됨.
	double number4 = 11.2;
	
	cout << boolalpha;
	
	//isnormal 함수를 이용해 변수 4개의 유효성을 검사한다.
	//만약, 유효하지 않은 값 0이라면 false를 리턴하고 그렇지 않다면 1, true를 리턴한다.
	//결과는 true, true, false, true이다.
	cout << isnormal(number1) << endl;
	cout << isnormal(number2) << endl;
	cout << isnormal(number3) << endl;
	cout << isnormal(number4) << endl;
	
	return 0;
}

/*
프로그래밍을 하다보면 실수를 인수로 삼아 계산하는 경우가 많다.
이럴 때, 0으로 연산하면 프로그램 오류가 발생한다. 이를 방지하기 위해 사용할 수 있는 함수가 isnormal 이다.
*/
