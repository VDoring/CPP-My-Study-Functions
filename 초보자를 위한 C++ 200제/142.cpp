//142
//auto ����ϱ�
#include <iostream>
#include <string>

using namespace std;

//�Լ� ������ int, double, string�� ��ȯ�Ѵ�.
int GetInt() { return 1; }
double GetDouble() { return 1.11; }
string GetString() { return "3"; }

//auto�� ��ȯ�ҋ� ���ϰ��� Ÿ���� ������ �� �ִ�. ������ ���ڸ� 2�� �޾� �� ���� ���������� ��ȯ�ϴ� �Լ��̴�.
auto add(int x, int y) -> int
{
	return x + y;
}

int main()
{
	//auto Ű���带 �̿��� ������ ���� �ٸ� ������ �����Ѵ�. �� �������� ��� auto������ ������ �ܰ迡�� �ڷ����� �����ȴ�.
	auto data1 = GetInt();
	auto data2 = GetDouble();
	auto data3 = GetString();
	auto data4 = add(5.1, 10.2);

	//typeid�� name�Լ��� �ڷ��� �̸��� ��ȯ�Ѵ�.
	cout << "Data1 : " << data1 << ", " << typeid(data1).name() << endl;
	cout << "Data2 : " << data2 << ", " << typeid(data2).name() << endl;
	cout << "Data3 : " << data3 << ", " << typeid(data3).name() << endl;
	cout << "Data4 : " << data4 << ", " << typeid(data4).name() << endl;

	return 0;
}

/*
���־� ��Ʃ��� 2012���� ����� C++11�� ǥ�� �� �ϳ��� �����Ϸ��� �ڵ����� Ÿ���� �����ϴ� Ű���� auto�̴�.

���� ��� � �������� string��, � �������� int�� ��ȯ�Ҷ� string�� int�� ó�� �Լ��� ���� �����ϴ� ��� auto Ű���带 ����Ͽ� ������ �� �ִ�.
���뼺 ����.

������, ���߽� �������� ����Ʈ�� �ش� �ڷ����� �������� ���α׷��� ���� ���� �����ϱ� ��������� ���� ������ ������ ����ϴ� ���� ����.
*/