//026
//조건부 삼항 연산자 이해하기(? :)
#include <iostream>

using namespace std;

int main()
{
	int x = 1;
	int y = 2;
	int z = 0;

	z = x > y ? x : y;

	cout << "x와 y중 더 큰 값은 : " << z << endl;

	return 0;
}

/*
z = x > y ? x : y;

는 이것과 동일하다.

if(x > y)
	z = x;
else
	z = y;
*/

/*
삼항 연산자는 조건부 연산자라고도 불린다.

if문을 대체라는 효과가 있어 소스를 축약할 수 있다.
(코드 최적화를 소개하는 글에서 빠지지 않고 등장하는 연산자이다)

가독성 UP, 코드라인 일부를 줄일 수 있다.


z는 1항
x > y는 2항
x : y는 3항

*/