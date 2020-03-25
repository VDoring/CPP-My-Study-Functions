//011
//함수 배우기( () )
#include <iostream>
using namespace std;

void Minus(const int x, const int y) {
	cout << "x - y = " << x - y << endl;
}

int Plus(const int x, const int y) {
	return x + y;
}

int main() {
	Minus(10, 5);

	cout << "x + y = " << Plus(2, 6) << endl;

	return 0;
}

/*
함수는 어떤 목적을 갖고 만들기때문에 하나의 특수한 동작을 보유한다.
여러 곳에서 자주 사용하는 소스 코드일수록 이처럼 함수로 분리하는 것이 좋다.

소스코드가 길어지고 프로젝트 규모가 커질수록 함수의 역할은 중요해진다.
수많은 코드 중 특수한 동작을 담당하는 함수가 있어야 소스코드 가독성도 높아지고 유지보수도 수월해진다.
*/