//020
//논리형 변수 이해하기(bool)
#include <iostream>

using namespace std;

int main() {
	int x = 10;
	int y = 6;

	bool is_true = false; //bool 변수를 선언하여 false로 초기화한다. (여기선 조건에 "맞다"라는 것을 유추하기 위해)

	if (x > y) {
		is_true = true;
	}
	else {
		is_true = false;
	}

	if (is_true == true) {
		cout << "x는 y보다 큽니다" << endl;
	}
	else {
		cout << "x는 y보다 작습니다" << endl;
	}
	
	return 0;
}

/*
논리형 변수는 true와 false로 나타내며, true는 정수 1, false는 정수 0의 값을 갖는다.
논리형 변수를 다룰떄 1, 0으로도 사용할 수 있으나, 가독성을 위해 true, false를 사용하는 것이 일반적이다.
C++에서 제공하는 함수 형태에 따라 논리형 반환값을 true, false 또는 0, 1로 설정하기도 한다.

*/