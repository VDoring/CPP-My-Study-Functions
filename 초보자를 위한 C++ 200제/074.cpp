//074
//Call by Value �����ϱ�
#include <iostream>

using namespace std;

//Func �Լ��� ���ڷ� ���� int ������ 10�� �����ش�. ����� 10�� 20�̴�.
void Func(int arg)
{
	cout << "���� �� : " << arg << endl;
	arg += 10;
	cout << "���� �� : " << arg << endl;
}

//������ �����Ͽ� Func �Լ��� ���ڷ� �ѱ� �� ����Ѵ�. ����� 10�̴�.
int main()
{
	int year = 10;

	Func(year);

	cout << "�Լ� ���� �� : " << year << endl;

	return 0;
}

/*
8�� ���ο��� ���� year�� 10�� ���ߴµ� main �Լ����� ������ year�� ���� 10�̴�.
Call by Value�� ���ڷ� �Ѿ�� ���� ���������� ������ ����Ѵ�.
�׷��Ƿ� year ������ Func �Լ� ���ο� ����� ���� ���� �ʴ�.
year ������ ���� 10�� ���Ѱ� �ƴ϶� ���������� ������ ���� 10�� ���� ���̴�.

*/