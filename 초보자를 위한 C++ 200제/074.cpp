//074
//Call by Value 이해하기
#include <iostream>

using namespace std;

//Func 함수는 인자로 받은 int 정수에 10을 더해준다. 결과는 10과 20이다.
void Func(int arg)
{
	cout << "변경 전 : " << arg << endl;
	arg += 10;
	cout << "변경 후 : " << arg << endl;
}

//변수를 선언하여 Func 함수에 인자로 넘긴 후 출력한다. 결과는 10이다.
int main()
{
	int year = 10;

	Func(year);

	cout << "함수 종료 후 : " << year << endl;

	return 0;
}

/*
8번 라인에서 인자 year에 10을 더했는데 main 함수에서 여전히 year의 값은 10이다.
Call by Value는 인자로 넘어온 값을 내부적으로 복사해 사용한다.
그러므로 year 변수는 Func 함수 내부에 복사된 값과 같지 않다.
year 변수에 직접 10을 더한게 아니라 내부적으로 복사한 값에 10을 더한 셈이다.

*/