// ���� ����� �ϴ� �Լ� ����

#include <iostream>

void print_square(int arg);

int main() {
	int i;

	std::cout << "������ �� : ";
	std::cin >> i;

	print_square(i);

	return 0;
}

void print_square(int arg) {
	std::cout << "���޵� ���� : " << arg * arg << std::endl;
}

// https://modoocode.com/141