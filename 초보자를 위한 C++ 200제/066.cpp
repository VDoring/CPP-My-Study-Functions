//066
//문자열 뒤집기(reverse)
#include <iostream>
#include <string>
#include <algorithm> //reverse()를 사용하기 위해 include

using namespace std;

int main() {
	string str = "gfedcba";

	reverse(str.begin(), str.end()); //첫 위치에서 마지막 위치까지 문자열을 모두 뒤집기.

	cout << str << endl;

	return 0;
}

/*
앞으로 C++을 공부하면 C++11, C++14, C++17, C++20 등의 표준을 접하게 될텐데, C++버전은 높아질수록 더 많은 기능과 더 많은 라이브러리를 지원한다.
이 책에서는 주로 C++11을 이용한 함수를 사용하고 있다.
비주얼 스튜디오 같은 개발툴의 버전이 높아지면 기존 문법이 수정되기도 하며, 새로운 문법이 등장하기도 한다.
더 좋은, 더 강혁한 문법이 등장한다면 당연히 그것을 공부하고 사용하는 것이 좋다.
*/