//072
//���� ���� �����ϱ�
#include <iostream>

using namespace std;

//�Լ��� ���ڸ� ������ ������� �ʰ� 7�� ���ο� ����� ������ �����Ѵ�.
int Temp1(const int arg)
{
	int number = 20;

	return number + 1;
}

//�Լ��� ���ڸ� ����� ���� ������ �ʱ�ȭ�Ͽ� �����Ѵ�.
int Temp2(const int arg)
{
	int number = arg;

	return number + 1;
}

int main()
{
	int number = 10;

	//�� �Լ����� ���ϵ� ���� ����غ��� 21,11�̴�.
	//Temp1, Temp2. main �Լ��� ���������� number�� ���� �̸��� ������ ����Ǿ��µ�, �Ϲ������� ���� �̸��� ������ �Լ��� ����� �� ����.
	//������ ��ȿ ������ �ٸ��ٸ� ���� �̸��� ������ �����Ͽ� ����� �� �ִ�. ������ ��ȿ ������ �ٸ��� �ߺ��Ͽ� ����� �� �ִ� ���� �Ǵ� ���̴�.
	int rtn1 = Temp1(number);
	int rtn2 = Temp2(number);

	cout << "���� �Լ� number : " << number << endl;
	cout << "Temp �Լ� number: " << rtn1 << endl;
	cout << "Temp �Լ� number : " << rtn2 << endl;

	return 0;
}

/*
Ư�� ���������� ��ȿ�� ������ ���� ������� �θ���.
*/