//061
//문자열에서 특정 문자만 제거하기(erase, remove)
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	string sentence = "i like coding";

	sentence.erase(remove(sentence.begin(), sentence.end(), ' '), sentence.end()); //Visual Studio 2017 ERROR. I don't know.
	//문자열에서 특정 문자만 제거할 떄는 erase와 remove함수를 함께 사용한다.
	//erase함수의 첫번쨰 인자로 remove 함수가 호출되었는데, 이 함수는 특정 문자가 있는 모든 인덱스를 erase함수에 알려준다.
	//첫번째 인자 begin은 문자열의 시작 위치, 두번쨰 인자 end는 문자열의 마지막 위치, 세번쨰 인자 ' '는 공백이다.
	//문자열의 시작에서 마지막 위치까지 순회하여 공백의 모든 위치를 erase함수에 리턴하는 것이다.

	cout << sentence << endl;

	return 0;
}