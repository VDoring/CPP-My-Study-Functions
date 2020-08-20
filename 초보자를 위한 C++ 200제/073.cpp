//073
//전역 변수 이해하기(extern)
#include <iostream>

using namespace std;

extern int g_number = 100; //extern 키워드를 이용해 전역 변수를 선언한다.

// 함수에서 각각 전역 변수를 1 증가시킨다.
int Func1()
{
	return g_number++;
}

// 함수에서 각각 전역 변수를 1 증가시킨다.
int Func2()
{
	return g_number++;
}

int main()
{
	int number = g_number++;

	cout << "메인 number : " << number << endl; //100
	cout << "Func1 number : " << Func1() << endl; //101
	cout << "Func2 number : " << Func2() << endl; //102

	return 0;
}

/*
전역 변수는 프로그램 어느 곳에서 접근하여 사용할 수 있는 변수이다.
일핏 보면 사용하기 편리하다고 생각할 수 있겠지만, 실제로는 정반대이다.

C++같은 객체지향 프로그래밍 언어엔 전역이란 개념 자체가 없고, 억지로 전역 변수, 전역 함수를 사용하면 네임스페이스 오염, 커플링 문제, 메모리 할당, 테스트 어려움 등 좋은 점은 없고 나쁜점이 많다.
...현업에선 아예 사용하지 말라고 지음이가 말하고 있다.
*/