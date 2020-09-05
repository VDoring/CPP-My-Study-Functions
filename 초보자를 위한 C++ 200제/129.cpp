//129
//가변인자 함수 사용하기(C언어 스타일)
#include <iostream>
#include <stdarg.h> //가변인자에서 사용할 함수들이 있는 헤더.

using namespace std;

int Sum(int arg, ...) //일반적으로 전달하는 인자가 첫 번째, 가변인자가 두 번째이다. 첫 번쨰 인자는 가변인자와 관련이 없으며 ...으로 표기된 부분이 실제로 가변인자를 나타낸다.
{
	va_list ap; //va_list는 가변인자의 주소를 가리킨다. ap 포인터 형태이며 va_start에 인자로 전달되어야 실제 주소값을 보유학게 된다.
	va_start(ap, arg); //첫번쨰 인자로 받은 arg는 25번 라인에서 보내는 5의 값으로 가변 인자가 총 5개라는 것을 명시적으로 알려주는 용도이다. 즉, ap에 5개 인자의 주소를 할당한다는 의미가 된다.

	int sum = 0;

	for (int i = 0; i < arg; i++) //모든 인자를 비교할 때까지 반복한다.
		sum += va_arg(ap, int); //va_arg 함수를 이용해 순차적으로 int형 데이터를 불러오는데 위치 값은 ap의 주소를 참조한다. 즉, 첫 인자의 주소에서 마지막 인자의 주소까지 순회하는 것이다.

	va_end(ap); //가변 인자 사용이 끝났음을 알리고 결과값을 리턴한다.

	return sum;
}

int main()
{
	int number = Sum(5, 1, 2, 3, 4, 5); //sum 함수에 6개의 인자를 넘기는데, 첫 번째 인자 5는 for문이 몇 번 반복될지 결정한다. 뒤의 1,2,3,4,5가 for문 안에서 더해지는 값이다.

	cout << "1에서 5까지 합 : " << number << endl;

	return 0;
}

/*
C언어 스타일의 가변인자 함수를 사용하기 전에 세가지를 먼저 이해해야 한다.

va_start(va_list, lastfix) : 첫 번째 가변인수 위치를 찾아 시작 번지를 알아낸다. 포인터 형태이다.
va_arg(va_list, type)      : va_list가 가리키는 위치의 값을 읽어내 리턴한다.
va_end(va_list)            : va_list를 초기화하여 가변인자 사용이 끝났음을 알린다.

*/