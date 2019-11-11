//참조자 사용법 예시

#include <iostream>
int main() {
	int x;
	int& y = x;
	int& z = y;

	x = 1;
	std::cout << "X는 " << x << ", Y는 " << y << ", Z는 " << z << std::endl;

	y = 2;
	std::cout << "X는 " << x << ", Y는 " << y << ", Z는 " << z << std::endl;

	z = 3;
	std::cout << "X는 " << x << ", Y는 " << y << ", Z는 " << z << std::endl;
}

// https://modoocode.com/141


/* 여담으로
C언어에선
  scanf("%d", &user_input);
&를 써주었지만

C++에서는
  std::cin >> user_input;
&를 쓰지 않는다.

C는 포인터형태로, C++는 레퍼런스 현태로 전달하였기 때문.

*/