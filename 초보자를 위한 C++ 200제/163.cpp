//163
//bitset 수정하기, 문자열 변환, 숫자 변환
#include <iostream>
#include <bitset> //bitset을 사용하기 위해 include
#include <string>

using namespace std;

int main()
{
	bitset<8> data1(1); //bitset을 1과 16진수 0x01로 초기화한다. 초기 값은 00000001 이다.
	bitset<8> data2(0x01);

	cout << "data1 : " << data1 << endl; //두 bitset을 출력한다. 결과 값은 00000001 로 똑같다.
	cout << "data2 : " << data2 << endl;

	data1.set(0, false); //set 함수를 이용해 하나의 비트만 수정할 수 있다.
	data1.set(2, 1); //첫 번째 인자는 수정할 비트의 인덱스, 두 번쨰 인자는 설정할 값이다. 두 번쨰 인자가 1이면 true, 0이면 false이다.

	cout << endl << "== data1 ==" << endl; //bitset data1을 출력한다. 결과 값은 00000100 이다.
	cout << "data1 : " << data1 << endl;

	data2[4] = false; //[]을 이용해 하나의 비트를 수정할 수 있다.
	data2.flip(5); //flip은 해당 위치 비트를 반전한다. 0이라면 1로, 1이라면 0으로 변경한다.

	cout << endl << "== data2 ==" << endl; //bitset data2를 출력한다. 결과 값은 00100001 이다.
	cout << "data2 : " << data2 << endl;

	string data1_str = data1.to_string(); //bitset을 문자열과 정수로 변환하는데, to_string과 to_ulong 함수를 사용한다.
	int data2_int = data2.to_ulong();

	cout << endl << "== 변환 ==" << endl;
	cout << "data1 : " << data1_str << endl;
	cout << "data2 : " << data2_int << endl;

	return 0;
}