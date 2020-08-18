//062
//문자열 일부 교체하기(replace)
#include <iostream>
#include <string>

using namespace std;

int main() {
	string sentence = "i like coding";
	string find_str = "coding"; //찾을 문자열
	string replace_str = "history"; //바꿀 문자열

	sentence.replace(sentence.find(find_str), find_str.length(), replace_str); //문자열 교체 작업.
	//sentence.find(find_str) : 전체 문자열에서 "coding"을 찾아 그 위치를 알아낸다.
	//find_str.length() : 찾아야 할 문자열의 길이를 replace 함수에 알려준다.
	//replace_str : 찾아낸 문자열을 교체할 새로운 문자열이다.

	cout << sentence << endl;

	return 0;
}