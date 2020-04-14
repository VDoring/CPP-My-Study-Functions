//018
//정수형 변수 이해하기(int)
#include <iostream>

using namespace std;

int main() {
	int positive = 100;
	int negative = -200;
	int ascii_value = 'A';

	cout << "양수 값 : " << positive << endl;
	cout << "음수 값 : " << negative << endl;
	cout << "아스키 값 : " << ascii_value << endl;

	return 0;
}

/*
int는 정수를 의미하는 자료형이다. 즉 문자열 등은 선언할 수 없다.(문자는 가능하다)
만약 소수점이 있는 실수를 할당하면 소수점은 생략되며, 자료형이 변환되면서 데이터가 손실될 수 있다는 경고메세지가 뜬다.

(char와 마찬가지로)unsigned로 선언되면 양수로만 사용할수 있다
*/

/*
요즘의 컴퓨터는 8bit를 1byte로 다루며, 32비트나 64비트 운영체제가 일반적이다.
변수는 char < short < int < long < long long 순서로 byte크기가 커지지만, 컴퓨터 아키텍쳐에 따라 byte 크기가 달라질 수도 있다.
프로그램 이식성을 고려하면 int대신 int8, int32, int64 등으로 변수의 크기를 OS가 아닌, 소스코드에서 미리 결정하기도 한다.
*/