//016
//문자형 변수 이해하기(char)
#include <iostream>

using namespace std;

int main() {
	//char의 범위: -128 ~ 127
	//숫자로도 값 할당 가능
	char ch1 = 'c';
	char ch2 = 200; //char변수의 범위를 초과하는 값이 입력되면 보수를 취함.
					//128 - 200 = -72이므로, char의 최소 범위 -127에서 72증가한 -56이 출력된다

	//unsigned char의 범위: 0 ~ 255
	//unsigned char = 기호 없는 char
	unsigned char ch3 = 'c';
	unsigned char ch4 = 200; //unsigned char 범위에 속하는 값을 할당받기에 숫자는 정상적으로 출력된다.
							//하지만 200에 해당하는 아스키 값은 없으므로 ?로 출력된다.

	printf("char ch1 = %c, %d \n", ch1, ch1); // c, 99
	printf("char ch2 = %c, %d \n", ch2, ch2); // ? -56
	printf("char ch3 = %c, %d \n", ch3, ch3); // c, 99
	printf("char ch4 = %c, %d \n", ch4, ch4); // ? 200

	return 0;
}

/*
아스키코드(ASCII) : 전세계에서 공통으로 사용하는 컴퓨터 문자 값

- 특수문자 : 33 ~ 47, 58 ~ 64, 91 ~ 96, 123 ~ 126
- 숫자 : 48 ~ 57
- 대문자 : 65 ~ 90
- 소문자 : 97 ~ 122
*/