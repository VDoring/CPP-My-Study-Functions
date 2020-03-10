//005
//사칙연산 배우기(+,-,*,/)
#include <iostream>

using namespace std;

int main() {
	int one = 1;
	int two = 2;
	int three = 3;
	int four = 4;

	cout << "1 + 2 = " << one + two << endl;
	cout << "2 - 1 = " << two - one << endl;
	cout << "2 * 3 = " << two * three << endl;
	cout << "4 / 2 = " << four / two << endl;

	cout << "2 + 3 * 4 = " << two + three * four << endl;
	cout << "1 + 4 / 2 = " << one + four / two << endl;

	return 0;

}