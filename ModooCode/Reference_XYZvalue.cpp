//������ ���� ����

#include <iostream>
int main() {
	int x;
	int& y = x;
	int& z = y;

	x = 1;
	std::cout << "X�� " << x << ", Y�� " << y << ", Z�� " << z << std::endl;

	y = 2;
	std::cout << "X�� " << x << ", Y�� " << y << ", Z�� " << z << std::endl;

	z = 3;
	std::cout << "X�� " << x << ", Y�� " << y << ", Z�� " << z << std::endl;
}

// https://modoocode.com/141


/* ��������
C����
  scanf("%d", &user_input);
&�� ���־�����

C++������
  std::cin >> user_input;
&�� ���� �ʴ´�.

C�� ���������·�, C++�� ���۷��� ���·� �����Ͽ��� ����.

*/