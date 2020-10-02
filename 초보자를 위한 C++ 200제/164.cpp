//164
//bitset 비트 연산하기
#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	//4비트 크기의 bitset을 선언하며 초기값을 0110, 1001로 설정한다.
	bitset<4> data1(6); //0110
	bitset<4> data2(0x09); //1001

	auto result1 = data1 | data2; //OR. 한 비트만 1이어도 결과가 1이 된다.
	cout << "data1 | data2 = " << result1 << endl; //1111
	
	auto result2 = data1 & data2;//AND. 양쪽 비트가 1이어야 결과가 1이 된다.
	cout << "data1 & data2 = " << result2 << endl; //0000
	
	auto result3 = data1 ^ data2; //XOR. 양쪽 비트가 각각 0과 1이어야 결과가 1이 된다.
	cout << "data1 ^ data2 = " << result3 << endl; //1111

	auto result4 = data1 << 1; //전체 비트를 왼쪽으로 1만큼 이동.
	cout << "data1 << 1 = " << result4 << endl; //1100

	auto result5 = data1 >> 1; //전체 비트를 오른쪽으로 1만큼 이동.
	cout << "data1 >> 1 = " << result5 << endl; //0011

	auto result6 = ~data1; //data1 비트 전체를 반전한다.
	cout << "~data1 = " << result6 << endl; //1001
	
	return 0;
}