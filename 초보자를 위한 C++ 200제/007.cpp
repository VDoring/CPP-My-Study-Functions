//007
//�ڷ��� �����ϱ�(chat, int, double, bool, string)
#include <iostream>
#include <string> //���ڿ� �ڷ����� string�� ����ϱ� ����
				//string�� �Ϲ����� �ڷ����� �ƴ϶� Ŭ�����̱� ����

using namespace std;

int main() {
	char character = 'C'; //char�� ���� �ϳ��� ���� ����
	int integer = 100;
	double precision = 3.14159;
	bool is_true = true;
	string word = "Hello World!"; //���� �Ҵ��� ������ ���� �����̼�(")�� �յھ� ���δ�

	cout << "char: " << character << endl;
	cout << "int: " << integer << endl;
	cout << "double: " << precision << endl;
	cout << "bool: " << is_true << endl;
	cout << "string: " << word << endl;

	return 0;
}