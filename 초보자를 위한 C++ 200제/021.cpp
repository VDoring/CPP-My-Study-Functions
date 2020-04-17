//021
//대입 연산자 이해하기(=)
#include <iostream>

using namespace std;

int main() {
	int x = 1;
	int y = 9;

	int z = x + y;

	double i = 1.2;
	double j = 2.3;

	double k = i + j;

	cout << "x + y = " << z << endl;
	cout << "i + j = " << k << endl;

	return 0;
}

/*
C++ 프로그래밍에서는 수학과 반대로 등호(=)를 기준으로 오른쪽 값을 왼쪽으로 대입한다.
이떄 왼쪽에 위치하는 변수를 L-value라고 부른다. (상수는 L-value가 될 수 없다.
*/