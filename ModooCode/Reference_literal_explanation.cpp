#include <iostream>

int main() {
	int &ref = 4;

	std::cout << ref << std::endl;
}

// 여기서는 const int &ref = 4;로 해야 한다.


// https://modoocode.com/33 리터럴에 대한 설명