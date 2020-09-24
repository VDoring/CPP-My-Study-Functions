//149
//tuple ����ϱ�(sizeof)
#include <iostream>
#include <tuple>
#include <string>

using namespace std;

int main()
{
	//���� �ٸ� ������ Ʃ�� 3���� �����Ѵ�. �� Ʃ���� ũ�⸦ ����ϴµ� ����� 4,16,24�̴�.
	tuple<int> data1(1); //���� ū �ڷ����� int 4����Ʈ. 4 * 1 = 4
	tuple<int, double> data2(1, 2.3); //���� ū �ڷ����� double 8����Ʈ. 8 * 2 = 16
	tuple<int, double, char> data3(1, 2.3, 'a'); //���� ū �ڷ����� double 8����Ʈ. 8 * 3 = 24

	cout << sizeof(data1) << ", " << sizeof(data2) << ", " << sizeof(data3) << endl;

	return 0;
}

/*
Ʃ�� ũ�� ��� ���)
���� ū �ڷ��� * ���� ���� = Ʃ�� ũ��

Ʃ���� ũ�⸦ ����� �� ���� ū �ڷ����� �ּ� ����Ʈ�� ������.
*/