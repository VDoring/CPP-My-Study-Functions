//080
//enum class �����ϱ�
#include <iostream>

using namespace std;

//enum ����
enum Status
{
	normal = 0,
	abnormal,
	disconnect = 100,
	close
};

//enum class�� ������ char ���·� �����Ѵ�.
//enum�� ������ ���� ���� �� �־� int�� char���·� ������ �� �ִ�.
enum class MachineStatus : char //���⿡ �ڷ����� ������� ������ �⺻������ int���·� ����� �� �ִ�.
{
	normal = 'n',
	abnormal,
	disconnect = 100,
	close
};

int main()
{
	MachineStatus machine = MachineStatus::abnormal; //enum���� �ٸ��� �ݵ�� enum class ��Ҹ� ����Ϸ��� enum class �̸��� ���� �����ؾ��Ѵ�.
	                                                 //enum class�� ���� �̸��� ��Ҹ� ���� ������ ����� �� �ֵ��� �����ϱ� ������ ��� �������� ��� ��������� ��Ȯ�ϰ� �����ؾ� �Ѵ�.

	if (machine == MachineStatus::normal)
		cout << "Status : normal" << endl;
	else if (machine == MachineStatus::abnormal)
		cout << "Status : abnormal" << endl;
	else if (machine == MachineStatus::disconnect)
		cout << "Status : disconnect" << endl;
	else
		cout << "Status : close" << endl;

	cout << "machine : " << static_cast<int>(machine) << ", " << static_cast<char>(machine) << endl;

	return 0;
}

/*
enum class�� enum�� �Ѱ踦 �غ��ϱ� ���� ���������.
enum ��ҿ� ���ϴ� ������� �Ϲ� ������ó�� �̸��� ��ġ�� �� �Ǳ� ������ �ε��� ����� �̸����� ��ü�� ����߾���.
������ enum class�� ���������ν� ���� �̸��� enum ��Ҹ� ����� �� �ְ� �Ǿ���.

*/