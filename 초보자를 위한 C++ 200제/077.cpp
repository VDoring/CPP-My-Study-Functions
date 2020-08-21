//077
//const 변수 이해하기
#include <iostream>
#include <string>

using namespace std;

int main()
{
	const string kMyJob = "developer"; //const로 선언되었기 떄문에 프로그램이 종료할 떄까지 값이 변하지 않는다.

	string question = "who are you : ";
	string answer = "my job is : ";

	cout << question << kMyJob << endl;
	cout << answer << kMyJob << endl;

	return 0;
}

/*
const는 상수로 불리우며 값을 바꿔선 안 될 것을 의미한다.
C언어의 #define을 대체하는 C++ 문법으로 해당 변수는 변경되지 않기 때문에 코드 최적화에도 효과가 있다.

일반적으로 변경되지 않을 변수들을 const로 선언해 따로 관리하는데, 이럴 경우 매번 변수 선언하는 행위를 생략할 수 있어서 업무에도 효율적이다.
const는 함수 인자, 변수, 포인터 등에도 사용할 수 있어 그 쓰임새가 다양하다.

참고로, 현업 개발자 사이에서 const는 종종 논란이 일어난다.
값을 절대로 바꿀 수 없는 키워드는 const, #define, enum이 있는데, 상황에 따라 효율적인 키워드가 다 다르기 떄문이다.
*/