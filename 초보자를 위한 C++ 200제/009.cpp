//009
//순환문 배우기(for)
#include <iostream>

using namespace std;

int main() {
	int sum1 = 0;
	int sum2 = 0;

	int one = 1;
	int two = 2;

	//for순환문은 특정 작업을 반복수행하는데 사용한다
	for (int i = 0; i < 5; i++) {
		sum1 += one;
		sum2 += two;
	}

	cout << "합산결과 : " << sum1 << ", " << sum2 << endl;

	return 0;
}