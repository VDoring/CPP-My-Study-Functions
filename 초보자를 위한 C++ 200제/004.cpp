//004
//상수 배우기
#include <iostream>

using namespace std;

int main() {
	const int GREATE_VICTORY_SALSU = 612;
	const int GREATE_VICTORY_GWIJU = 1019;

	cout << "고구려 살수대첩 연도 : " << GREATE_VICTORY_SALSU << "년" << endl;
	cout << "고려 귀주대첩 연도: " << GREATE_VICTORY_GWIJU << "년" << endl;

	return 0;
}

/*
상수 = 변하지 않는 값. 프로그램이 시작하고 종료될 때까지 단 한 번만 초기화된다. 프로그램이 종료되기 전까지 상수의 값은 변할 수 없다.

만약 상수에 다른 값을 할당하면 다음과 같은 에러가 발생한다.
"식이 수정할 수 있는 lvalue여야 합니다."
= lvalue는 Left value, 즉 값을 할당받아야 할 변수를 의미한다.

*/
