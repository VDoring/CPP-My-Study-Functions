// 1~10까지 더함

#include <iostream>
int main() {
	int sum = 0;

	for (int i = 1; i <= 10; i++) {
		sum += i;
	}

	std::cout << "SUM : " << sum << std::endl;
	return 0;
}

// https://modoocode.com/138