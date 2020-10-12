//185
//좌변이 우변보다 작은지 확인하기(isless)
#include <iostream>

using namespace std;

int main()
{
	int x = 10; //정수형 변수 선언
	int y = 20; //정수형 변수 선언
	double a = 12.2; //실수형 변수 선언
	double b = 5.6; //실수형 변수 선언
	
	cout << boolalpha;
	cout << isless(20, 11) << endl; //첫 번쨰 값이 더 큼. false 리턴
	cout << isless(x, y) << endl; //두 번쨰 갑이 더 큼. true 리턴
	cout << isless(a, b) << endl;
	cout << isless(x, b) << endl;
	
	return 0;
}

/*
ifgreater 함수는 두 인수 중 첫 번쨰의 값이 더 크면 false, 두 번째 값이 더 크면 true가 리턴된다.

실수와 정수의 비교시엔 별도의 형변환이 필요하지 않다.
*/
