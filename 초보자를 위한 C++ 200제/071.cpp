//071
//포인터 배열 사용하기
#include <iostream>

using namespace std;

int main()
{
	const int kSize = 3; //배열의 크기로 사용.

	int numbers[kSize] = { 10,20,30 }; //배열 선언
	int *pointer1 = numbers; //포인터 변수에 배열의 주소를 지정.
	                         //배열의 포인터 주소는 numbers[0]을 가리키며 증감 연산자로 주소를 증가하면 numbers[1], numbers[2]로 포인터가 가리키는 곳이 변경된다.

	int no1 = 1;
	int no2 = 2;
	int no3 = 3;
	int *pointer2[kSize] = { &no1, &no2, &no3 }; //포인터 배열을 선언하며 초기값도 함꼐 지정한다. (배열은 선언과 함께 초기화하는 습관이 중요하다)

	//pointer1은 numbers의 주소를 가리키기 떄문에 pointer1[0]처럼 사용하면 주소값이 출력된다.
	for (int i = 0; i < kSize; i++) {
		cout << "Pointer1[" << i << "] = " << *(pointer1 + i) << endl;
	}

	//pointer1은 numbers의 주소를 통해 number의 값에 접근하지만, pointer2는 해당 변수의 주소를 이미 저장한 상태다.
	//그래서 22번 라인처럼 괄호를 이용한 포인터 연산이 필요하지 않다.
	for (int i = 0; i < kSize; i++) {
		cout << "Pointer2[" << i << "] = " << *pointer2[i] << endl;
	}

	return 0;
}

/*
종종 더블 포인터(**)나 3중, 4중 포인터 배열을 사용하는 예제가 있다. 하지만 너무 복잡하면 유지보수가 어렵기 때문에 이런 일이 생기면 프로그램 전체 구조를 다시 구성하는 것이 좋다.
*/