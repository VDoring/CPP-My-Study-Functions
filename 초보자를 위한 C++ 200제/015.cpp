//015
//스코핑룰 이해하기( {} )
#include <iostream>

using namespace std;

int x = 10; //전역 변수 x 선언(어디에서나 접근할 수 있는 변수)

int Func1() { //정수 y를 리턴하는 함수
	int y = x + 10; //Func1()함수 내부에는 x란 변수가 없다. 따라서 외부의 변수 x를 참조한다.
	return y;
}

int Func2() { //정수 x를 리턴하는 함수
	int x = 100; //Func2()함수 내부에 x란 변수가 있다. 따라서 외부의 변수 x를 참조하지 않는다.
	return x;
}

int main() {
	cout << "y = " << Func1() << endl; //Func1()의 y 출력
	cout << "x = " << Func2() << endl; //Func2()의 x 출력
	cout << "x = " << x << endl;		//전역 변수 x 출력

	return 0;
}

/*
어떤 변수든 변수가 유효한 공간이 존재하며, 이러한 영역을 scope라고 한다.
유효 범위를 제한하여 사용하는 것을 스코핑룰이라고 부른다.
변수와 함수가 많아지고 프로그램 규모가 커질수록 이런 스코핑룰을 잘 지키는 것이 중요하다.
*/