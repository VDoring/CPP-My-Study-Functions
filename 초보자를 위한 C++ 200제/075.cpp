//075
//Call by Reference �����ϱ�
#include <iostream>
#include <string>

using namespace std;

//�Լ� ���ڷ� int �ڷ����� �ּҸ� ����Ű�� �����͸� �޴´�. �׸��� 10�� �����Ѵ�.
void Func1(int &arg)
{
	cout << "���� �� : " << arg << endl;
	arg += 10;
	cout << "���� �� : " << arg << endl;
}

//�Լ� ���ڷ� string �ڷ����� �ּҸ� ����Ű�� �����͸� �޴´�. �׸��� ���ڿ� �ڿ� ������ �߰��Ѵ�.
void Func2(string &info)
{
	info += "981��";
}

//�Լ� Func1�� �̿��� year������ ���� 10 ������Ų��. �ٷ� �� �����ʹ� �ٸ��� Func1 �Լ��� ���ڸ� ������ ������� �ʰ� ������ �ּҸ� ����Ű�� �����͸� ����ϱ� ������ year �������� �����Ѵ�.
//�����Ͱ� ����Ű�� ��, �� �ּ��� ���� ���� �ٲٴ� ���̴�.
int main()
{
	int year = 10;

	Func1(year);

	cout << "Func1 �Լ� ���� �� : " << year << endl;

	string king_info = "��� ���� ������ : ";

	Func2(king_info); //���� ���� �ڷ����� �ٸ��� ������ �Ȱ���.

	cout << king_info << endl;

	return 0;
}