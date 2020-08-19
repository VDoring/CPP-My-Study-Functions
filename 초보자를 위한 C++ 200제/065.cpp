//065
//문자열 정렬하기(sort)
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	string sort_str1 = "gojoseon";
	string sort_str2 = "AaBbCcDdEe";

	sort(sort_str1.begin(), sort_str1.end());
	sort(sort_str2.begin(), sort_str2.end());

	cout << "소문자만 정렬 : " << sort_str1 << endl;
	cout << "대소문자만 정렬 : " << sort_str2 << endl;

	return 0;
}

/*
문자열을 알파벳 순서에 맞게 정렬한다.
대소문자가 섞여있다면 소문자는 대문자 뒤로 정렬된다.
*/