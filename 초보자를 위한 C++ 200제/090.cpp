//090
//����ü �ʱ�ȭ�ϴ� ��� 1
#include <iostream>

using namespace std;

//struct Ű���带 ����� ����ü�� �����Ѵ�.
struct Data1
{
	Data1(int x) : number(x) {} //�� ���ο��� Ŭ���� �����ڿ� ����� �ʱ�ȭ �ڵ尡 �ִ�.
	                            //��� ����� Ŭ���� �����ڿ� �Ȱ��� 29�� ����ó�� ����ü ������ ���鋚 ���ڷ� ������ �ѱ�� ���� ������ �ش� ������ �ʱ�ȭ�ȴ�.

	int number;
};

//����ü�� �����ϸ� ���� ���� number�� 10���� �ʱ�ȭ�Ѵ�.
struct Data2
{
	Data2()
	{
		number = 10;
	}

	int number;
} data2;

int main()
{
	Data1 data1(2);
	cout << "Data1 number : " << data1.number << endl;
	cout << "Data2 number : " << data2.number << endl;

	return 0;
}