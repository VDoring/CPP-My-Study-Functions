//011
//�Լ� ����( () )
#include <iostream>
using namespace std;

void Minus(const int x, const int y) {
	cout << "x - y = " << x - y << endl;
}

int Plus(const int x, const int y) {
	return x + y;
}

int main() {
	Minus(10, 5);

	cout << "x + y = " << Plus(2, 6) << endl;

	return 0;
}

/*
�Լ��� � ������ ���� ����⶧���� �ϳ��� Ư���� ������ �����Ѵ�.
���� ������ ���� ����ϴ� �ҽ� �ڵ��ϼ��� ��ó�� �Լ��� �и��ϴ� ���� ����.

�ҽ��ڵ尡 ������� ������Ʈ �Ը� Ŀ������ �Լ��� ������ �߿�������.
������ �ڵ� �� Ư���� ������ ����ϴ� �Լ��� �־�� �ҽ��ڵ� �������� �������� ���������� ����������.
*/