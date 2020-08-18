//063
//문자열을 정수로 변환하기(stoi)
#include <iostream>
#include <string>

using namespace std;

int main() {
	string str1 = "10";
	string str2 = "2.456";
	string str3 = "456 문자열";

	int num1 = stoi(str1); //10
	int num2 = stoi(str2); //2   , 실수형으로 만들어진 문자열을 정수로 변환하면 소수점 이하는 버려진 채 정수로 변환된다.
	int num3 = stoi(str3); //456 , 문자열과 숫자가 섞여있다면 문자열은 제거된 채 정수로 변환된다.

	cout << num1 << ", " << num2 << ", " << num3 << endl;

	return 0;
}

/*
비주얼 스튜디오 2012버전보다 낮을경우 stoi 함수는 C언어 스타일의 atoi 로 교체해 사용해도 무방하다.
(C++11 지원여부 관련)
*/