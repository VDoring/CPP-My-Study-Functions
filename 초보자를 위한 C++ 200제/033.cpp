//033
//��ø ���ǹ����� ���� ū �� ã��(if~else) 
#include <iostream>

using namespace std;

int main()
{
	int number1 = 100; 
	int number2 = 200;
	int number3 = 300;
	
	if(number1 > number2 && number1 > number3) //(number1���� number2�� Ŭ ��) AND (number1�� number3���� Ŭ ��) 
		cout << "���� ū�� number1 : " << number1 << endl;
	else if(number2 > number1 && number2 > number3) //(number1���� number2�� Ŭ ��) AND (number2�� number3���� Ŭ ��) 
		cout << "���� ū�� number2 : " << number2 << endl;
	else if(number3 > number1 && number3 > number2) //(number1���� number3�� Ŭ ��) AND (number2�� number3���� Ŭ ��) 
		cout << "���� ū�� number3 : " << number3 << endl;
	else
		cout << "ã�� �� �����ϴ�" << endl;
		
	return 0;
}
