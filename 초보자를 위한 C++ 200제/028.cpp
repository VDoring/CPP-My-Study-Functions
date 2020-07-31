//028
//비트 연산자 이해하기(&, |, ^, ~, <<, >>)

#include <iostream>
#include <bitset>
//C++에서는 C언어처럼 char나 int로 비트 연산을 하는 것보다 bitset이라는 컨테이너를 사용하는 것이 수월하다.
//bitset은 162, 163, 164장에서 자세히 다룬다.

using namespace std;

int main()
{
	bitset<8> bit1;
	//bitset 변수를 선언하며 크기는 8로 지정한다.
	bit1.reset(); //0000 0000
	//bitset을 0으로 초기화한다.
	bit1 = 127; //0111 1111
	//bitset 변수에 127을 할당한다.

	bitset<8> bit2;
	bit2.reset();
	bit2 = 0x20; //32. 0010 0000

	bitset<8> bit3 = bit1 & bit2; //0111 1111 & 0010 0000 -> 0010 0000
	bitset<8> bit4 = bit1 | bit2; //0111 1111 | 0010 0000 -> 0111 1111
	bitset<8> bit5 = bit1 ^ bit2; //0111 1111 ^ 0010 0000 -> 0101 1111
	bitset<8> bit6 = ~bit1;       //0111 1111             -> 1000 0000
	bitset<8> bit7 = bit2 << 1;   //0010 0000             -> 0100 0000
	bitset<8> bit8 = bit2 >> 1;   //0010 0000             -> 0001 0000

	cout << "bit1 & bit2 : " << bit3 << ", " << bit3.to_ulong() << endl;
	cout << "bit1 | bit2 : " << bit4 << ", " << bit4.to_ulong() << endl;
	cout << "bit1 ^ bit2 : " << bit5 << ", " << bit5.to_ulong() << endl;
	cout << "~bit1: " << bit6 << ", " << bit6.to_ulong() << endl;
	cout << "bit2 << 1: " << bit7 << ", " << bit7.to_ulong() << endl;
	cout << "bit2 >> 1: " << bit8 << ", " << bit8.to_ulong() << endl;

	return 0;
}

/*
8비트는 1바이트이며 2의 8승인 256가지를 표현할 수 있다.
C++ 자료형 중 char가 8비트 1바이트 단위이기 때문에 8비트 단위로 예제를 구성했다.

비트 연산에는 6가지 방법이 있다.
A & B : A와 B를 and 연산
A | B : A와 B를 or 연산
A ^ B : A와 B를 xor 연산. 값이 서로 다를 때(0과 1일때) 1로 바뀐다.
~A : A의 비트를 반전
A >> n : A의 모든 비트를 n만큼 오른쪽으로 시프트
A << n : A의 모든 비트를 n만큼 왼쪽으로 시프트
*/