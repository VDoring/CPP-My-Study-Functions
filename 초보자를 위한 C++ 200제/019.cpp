//019
//�Ǽ��� ���� �����ϱ�(double)
#include <iostream>

using namespace std;

int main() {
	double pi_d = 3.14;
	float pi_f = 3.14f; //float�� �� �ڿ� f�� ���δ�.
						//��ǻ�ʹ� �Ǽ��� �⺻������ 8����Ʈ double�� �����ϱ� �����̴�.

	cout << "pi_d = " << pi_d << endl;
	cout << "pi_f = " << pi_f << endl;

	return 0;
}

/*
�Ǽ��� �����͸� �ٷ� �� double�� float Ű���带 ����Ѵ�.
double�� 8����Ʈ�� ũ�⸦ ������, float�� 4����Ʈ�� ũ�⸦ ������.
double�� �Ҽ��� 15�ڸ�, float�� �Ҽ��� 7�ڸ��� �����ϱ� ������ �Ϲ������� float���� double�� �ַ� ����Ѵ�.

���� double�� float�� �Բ� ����ϸ� �����÷ο�(�ִ� �� �ʰ�), ����÷ο�(�ּ� �� �̸�) ������ ���� �� �ִ�.
*/