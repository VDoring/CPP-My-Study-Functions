//067
//���ڸ� ���ڿ��� ��ȯ�ϱ�(to_string)
#include <iostream>
#include <string>

using namespace std;

int main() {
	int number1 = 10;
	double number2 = 67.8;

	string no_str1 = to_string(number1);
	string no_str2 = to_string(number2);

	cout << "number1 : " << number1 << endl; //10
	cout << "number2 : " << number2 << endl; //67.8

	return 0;
}