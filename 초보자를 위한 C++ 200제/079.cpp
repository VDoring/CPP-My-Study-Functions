//079
//enum �����ϱ�
#include <iostream>

using namespace std;

//��� ������ �����ϰ� 4���� ���� �߰��Ѵ�. ��Ҵ� , �� �����ϰ� ���� �������� �ʾƵ� �ڵ����� �Ҵ��Ѵ�.
enum Status
{
	normal = 0,
	abnormal,
	disconnect = 100,
	close
};

int main()
{
	Status number = close; //������ enum�� ���� ���� close�� �����Ѵ�.

	//enum�� ��ҵ��� ������ ���� ���´�.
	//�� ��Ҵ� ���� ����� ������ �ڵ����� 1�� Ŀ����. (normal�� 0�̶�� abnormal�� 1�̴�. disconnect ���� 100�̶�� close�� 101�̴�.)
	if (number == Status::normal) //enum�� �̷��� �� ȣ���� �����ϴ�.
		cout << "Status : normal" << endl;
	else if (number == abnormal) //enum�� �̷��� ��� �̸������ε� ����� �� �ִ�.
		cout << "Status : abnormal" << endl;
	else if (number == 101) //enum�� �̷��� �����ε� ����� �� �ִ�.
		cout << "Status : disconnect" << endl;
	else
		cout << "Status : close" << endl;

	return 0;
}