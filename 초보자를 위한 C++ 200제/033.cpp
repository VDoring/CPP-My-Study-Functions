//033
//중첩 조건문으로 가장 큰 수 찾기(if~else) 
#include <iostream>

using namespace std;

int main()
{
	int number1 = 100; 
	int number2 = 200;
	int number3 = 300;
	
	if(number1 > number2 && number1 > number3) //(number1보다 number2가 클 떄) AND (number1이 number3보다 클 때) 
		cout << "가장 큰수 number1 : " << number1 << endl;
	else if(number2 > number1 && number2 > number3) //(number1보다 number2가 클 떄) AND (number2이 number3보다 클 때) 
		cout << "가장 큰수 number2 : " << number2 << endl;
	else if(number3 > number1 && number3 > number2) //(number1보다 number3가 클 떄) AND (number2이 number3보다 클 때) 
		cout << "가장 큰수 number3 : " << number3 << endl;
	else
		cout << "찾을 수 없습니다" << endl;
		
	return 0;
}
