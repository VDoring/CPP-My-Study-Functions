//006
//사칙연산 축약하기(+,-,*,/)
#include <iostream>

using namespace std;

int main() {
	int two = 2;
	int eight = 8;
	int sum1 = 2;
	int sum2 = 2;

	sum1 = sum1 + two; //2+2
	sum2 += eight; //2+8

	cout << "sum1 = " << sum1 << endl; //4
	cout << "sum2 = " << sum2 << endl; //10

	sum1 = 2;
	sum2 = 8;
	sum1 *= two; //2*2
	sum2 /= eight; //8/8

	cout << "sum1 = " << sum1 << endl; //4
	cout << "sum2 = " << sum2 << endl; //1

	return 0;
}