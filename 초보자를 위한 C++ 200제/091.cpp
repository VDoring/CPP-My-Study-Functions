//091
//����ü �ʱ�ȭ�ϴ� ��� 2
#include <iostream>

using namespace std;

//������ ������ ������ ����ü ����
struct Data1
{
	int number;
};

//�ٸ� ����ü�� ������ ������ ������ �� ����ü�� �����Ѵ�.
struct Data2
{
	Data1 data1; //����ü �ȿ� �ٸ� ����ü�� �����Ͽ� ����� �� �ִ�.

	int number;
} data2;

int main()
{
	Data1 data1 = { }; //{ }�� �ǹ� : ���� ������ ��� �ʱ�ȭ.
	                   //int�� 0���� �ʱ�ȭ�Ǹ�, data1 ������ 26���ο��� ���ڷ� ���ȴ�.

	Data2 data2{ data1, 10 }; //����ü�� �ʱ�ȭ�ϴ� �ٸ� ���.
	                          //{ } �ȿ� ����� ������ ���� ���ڸ� �����Ͽ� �ʱ�ȭ�Ѵ�.
	                          //Data1 ����, int ������ ���ʷ� ����Ǿ��� ������ ���ڵ� data1, 10�� ������ ���� �����ؾ� ������ �߻����� �ʴ´�.

	//data2 ������ ������ ���.
	cout << "Data1 number : " << data2.data1.number << endl;
	cout << "Data2 number : " << data2.number << endl;
}