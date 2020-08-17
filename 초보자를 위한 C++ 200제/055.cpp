//055
//문자열 길이 구하기(length) 
#include <iostream>
#include <string>

using namespace std; 

int main() {
	string jinduk_name = "김승만";
	string jinsung_name = "kim man";
	
	cout << "진덕여왕 이름 길이 : " << jinduk_name.length() << endl; // 6
	cout << "진성여왕 이름 길이 : " << jinsung_name.length() << endl; // 7
	
	return 0;
}

/*
알파벳은 대소문자 52개를 0에서 127로 구성된 아스키 문자로 표현할 수 있다.
하지만, 한글은 초성, 중성, 종성 등 그 수가 1만 개가 넘기때문에 0에서 65535까지 표현 가능한 2바이트에 한 글자를 담는다.

그래서 한글은 영문에 비해 문자열 길이가 두 배로 늘어난다. 

*/
