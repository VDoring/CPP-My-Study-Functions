//025
//�� ������ �����ϱ�(and(&&), or(||), not(!))
#include <iostream>

using namespace std;

int main()
{
	int x = 10;
	int y = 20;

	bool is_x = true;
	bool is_y = false;

	if (is_x == true && is_y == true)
		cout << "is_x && is_y = " << "true" << endl;
	else
		cout << "is_x && is_y = " << "false" << endl;

	if (x == 10 || is_x == false)
		cout << "x�� 10�̰ų� is_x�� true�Դϴ�" << endl;
	else
		cout << "x�� 10�� �ƴϰų� is_x�� false�Դϴ�" << endl;

	if (!is_y)
		cout << "is_y ���� ���� false�Դϴ�" << endl;
	else
		cout << "is_y ���� ���� true�Դϴ�" << endl;

	return 0;
}

/*
A && B : A�� B�� ���̸� ��
A || B : A�� B�� �ϳ��� ���̾ ��
!A     : A ������ �ݴ밪
*/