//008
//조건문 배우기(if ~ else)
#include <iostream>

using namespace std;

int main() {
	int x = 10;
	int y = 1;

	//조건문은 (true)인지 (false)인지를 판단해 서로 다른 코드를 실행한다
	if (x > y)
		cout << "x는 y보다 큽니다" << endl;
	else
		cout << "x는 y보다 작습니다" << endl;

	return 0;
}
