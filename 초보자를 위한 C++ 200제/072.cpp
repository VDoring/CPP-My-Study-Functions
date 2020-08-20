//072
//지역 변수 이해하기
#include <iostream>

using namespace std;

//함수의 인자를 받지만 사용하지 않고 7번 라인에 선언된 변수를 리턴한다.
int Temp1(const int arg)
{
	int number = 20;

	return number + 1;
}

//함수의 인자를 사용해 내부 변수를 초기화하여 리턴한다.
int Temp2(const int arg)
{
	int number = arg;

	return number + 1;
}

int main()
{
	int number = 10;

	//두 함수에서 리턴된 값을 출력해보면 21,11이다.
	//Temp1, Temp2. main 함수에 공통적으로 number란 같은 이름의 변수가 선언되었는데, 일반적으로 같은 이름의 변수나 함수는 사용할 수 없다.
	//하지만 유효 범위가 다르다면 같은 이름의 변수를 선언하여 사용할 수 있다. 변수의 유효 범위가 다르면 중복하여 사용할 수 있는 것이 되는 것이다.
	int rtn1 = Temp1(number);
	int rtn2 = Temp2(number);

	cout << "메인 함수 number : " << number << endl;
	cout << "Temp 함수 number: " << rtn1 << endl;
	cout << "Temp 함수 number : " << rtn2 << endl;

	return 0;
}

/*
특정 지역에서만 유효한 변수를 지열 변수라고 부른다.
*/