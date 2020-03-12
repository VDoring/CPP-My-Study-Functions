//레퍼런스를 리턴하는 함수의 예시

#include <iostream>

int fnl(int &a) { return a; }

int main() {
	int x = 1;
	std::cout << fnl(x)++ << std::endl;
}
/*
이 코드가 안되는 이유: fnl(x)를 했을때 "a를 x의 별명으로 해야지!"라고 한 후에 리턴하면서 평범한 int로 리턴하였기 때문.
즉, 임시로 복사된 x의 값이 반환되는 것.(우측값. 임시이므로 읽기만 가능)
*/

#include <iostream>

int &fnl2(int &a) { return a; }

int main() {
	int x = 1;
	std::cout << fnl2(x)++ << std::endl;
	std::cout << "x: " << x << std::endl;
}

//https://modoocode.com/141