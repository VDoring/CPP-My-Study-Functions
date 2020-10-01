//162
//bitset 초기화 방법, 비트 상태 조회하기
#include <iostream>
#include <bitset> //bitset을 사용하기 위해 include
#include <string>

using namespace std;

int main()
{
	bitset<8> data1(100); //bitset을 선언하며 3가지 방법으로 초기화한다. 정수를 직접 입력하거나,
	bitset<8> data2(0x78); //16진수를 입력할 수 있고,
	bitset<8> data3(string("11110000")); //문자열을 이용해 입력할 수 있다.

	cout << "data1 : " << data1 << endl; //초기화된 bitset을 출력한다. 결과는 각각 01100100, 01111000, 11110000 이다.
	cout << "data2 : " << data2 << endl;
	cout << "data3 : " << data3 << endl;

	data1.set(); //set 함수는 모든 비트를 1로 설정한다.

	cout << endl << "== data1 ==" << endl; //data1 비트열의 상태를 조회한다. 결과는 각각 1, 1, 0 이다.
	cout << "data1 all: " << data1.all() << '\n'; //all : 모든 비트가 1이면 true를 리턴
	cout << "data1 any: " << data1.any() << '\n'; //any : 하나의 비트만 1이어도 true를 리턴
	cout << "data1 none: " << data1.none() << '\n'; //none : 모든 비트가 0이어야 true를 리턴

	data2.reset(); //reset 함수는 모든 비트를 0으로 설정한다.

	cout << endl << "== data2 ==" << endl; //data2 비트열의 상태를 조회한다. 결과는 0, 0, 1 이다.
	cout << "data2 all: " << data2.all() << '\n';
	cout << "data2 any: " << data2.any() << '\n';
	cout << "data2 none: " << data2.none() << '\n';

	return 0;
}