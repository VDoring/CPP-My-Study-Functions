//���۷����� �����ϴ� �Լ��� ����

#include <iostream>

int fnl(int &a) { return a; }

int main() {
	int x = 1;
	std::cout << fnl(x)++ << std::endl;
}
/*
�� �ڵ尡 �ȵǴ� ����: fnl(x)�� ������ "a�� x�� �������� �ؾ���!"��� �� �Ŀ� �����ϸ鼭 ����� int�� �����Ͽ��� ����.
��, �ӽ÷� ����� x�� ���� ��ȯ�Ǵ� ��.(������. �ӽ��̹Ƿ� �б⸸ ����)
*/

#include <iostream>

int &fnl2(int &a) { return a; }

int main() {
	int x = 1;
	std::cout << fnl2(x)++ << std::endl;
	std::cout << "x: " << x << std::endl;
}

//https://modoocode.com/141