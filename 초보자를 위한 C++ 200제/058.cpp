//058
//문자열 중간에 문자열 추가하기(insert)
#include <iostream>
#include <string>

using namespace std;

int main() {
	string sentence = "i coding";
	sentence.insert(2, "hate "); //sentence 문자열의 2번쨰 의미('i'=0번쨰, '공백'=1번쨰, 'c'=2번쨰, o=3번째, ...)
	                             //2번쨰 위치에 새로운 문자열 추가
	cout << sentence << endl; //결과 확인

	sentence.insert(7, "or like "); //sentence 문자열의 7번쨰 위치에 새로운 문자열 추가
	cout << sentence << endl; //결과 확인

	return 0;
}
