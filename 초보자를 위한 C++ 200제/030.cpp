//030
//����� ��ȯ �����ϱ�( () )
#include <iostream>

using namespace std;

int main()
{
	int number1 = 65;
	double number2 = 23.4;

	int number3 = int(number2); //��ȣ() �ȿ� �ڷ����� �־� ��������� ��ȯ�ϴ� �������, int�� char�ε� ������ �� �ִ�.
	double number4 = double(number1 / number2); //double�� ������� ��ȯ�� �Ѵ�.

	char ch = char(number1); //int ������ char�ε� ǥ���Ǳ� ������ number1�� char�� ����� ��ȯ�Ѵ�. �ƽ�Ű �ڵ忡�� ���� 65�� ���ĺ� �빮�� A�̴�.

	cout << "number1 : " << number1 << endl;
	cout << "number2 : " << number2 << endl;
	cout << "number3 : " << number3 << endl;
	cout << "number4 : " << number4 << endl;
	cout << "ch : " << ch << endl;

	return 0;
}

/*
��������� �ڷ����� ��ȯ�Ͽ� �ڵ��� ���� �� ���� �� �� �ִ�.

*/