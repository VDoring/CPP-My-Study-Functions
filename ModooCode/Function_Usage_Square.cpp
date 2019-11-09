// 제곱 기능을 하는 함수 사용법

#include <iostream>

void print_square(int arg);

int main() {
	int i;

	std::cout << "제곱할 수 : ";
	std::cin >> i;

	print_square(i);

	return 0;
}

void print_square(int arg) {
	std::cout << "전달된 인자 : " << arg * arg << std::endl;
}

// https://modoocode.com/141