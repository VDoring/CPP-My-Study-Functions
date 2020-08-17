//057
//문자열 합치기(+=)
#include <iostream>
#include <string>

using namespace std;

int main() {
	string king = "조선 세종";
	string favorite1 = "고기";
	string favorite2 = "야근";

	string king_info = ""; //비어있음

	//+=이란 축약된 형태로 하나의 문자열에 다른 문자열을 합친다.
	king_info += king;
	king_info += "은 ";
	king_info += favorite1;

	//append는 추가한다는 의미로 +=와 똑같은 의미이다. 문자열 끝에 다른 문자열을 이어 붙이는 것으로 둘 중 어느 것을 사용해도 상관 없다.
	king_info.append("와 ");
	king_info.append(favorite2);
	king_info.append("을 좋아했습니다.");

	cout << king_info << endl;

	return 0;
}

/*
C언어에서 문자열을 합치려면 char 배열, strcat, 메모리 재할당을 이용한다.
하지만 C++에서는 + 연산자로 쉽게 구현할 수 있다.


string + 연산자를 이용하면 string, char, const char *도 쉽게 추가할 수 있다.
string은 내부 버퍼를 가지고 있으므로 가변 길이 문자열 처리가 가능하다.

또한 append, insert, push_back 함수로도 문자 또는 문자열을 추가할 수 있다.
string.append("ABC",2)처럼 추가할 문자열의 크기를 지정할 수 있으며, string.append("ABC", 1, 2)처럼 문자열 일부만 추출해 추가할 수도 있다.

insert를 응용할 경우 string.insert(2, "ABC", 2), string.insert(0, "ABC", 1, 2)처럼 추가할 영역, 추가할 문자열 범위 등을 설정할 수도 있다.

이처럼 string은 프로그래머가 쉽게 다룰 수 있는 방법이 다양하다.

*/