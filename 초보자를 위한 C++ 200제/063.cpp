//063
//���ڿ��� ������ ��ȯ�ϱ�(stoi)
#include <iostream>
#include <string>

using namespace std;

int main() {
	string str1 = "10";
	string str2 = "2.456";
	string str3 = "456 ���ڿ�";

	int num1 = stoi(str1); //10
	int num2 = stoi(str2); //2   , �Ǽ������� ������� ���ڿ��� ������ ��ȯ�ϸ� �Ҽ��� ���ϴ� ������ ä ������ ��ȯ�ȴ�.
	int num3 = stoi(str3); //456 , ���ڿ��� ���ڰ� �����ִٸ� ���ڿ��� ���ŵ� ä ������ ��ȯ�ȴ�.

	cout << num1 << ", " << num2 << ", " << num3 << endl;

	return 0;
}

/*
���־� ��Ʃ��� 2012�������� ������� stoi �Լ��� C��� ��Ÿ���� atoi �� ��ü�� ����ص� �����ϴ�.
(C++11 �������� ����)
*/