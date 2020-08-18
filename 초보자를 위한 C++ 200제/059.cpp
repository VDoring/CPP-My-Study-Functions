//059
//문자열 일부 지우기(erase)
#include <iostream>
#include <string>

using namespace std;

int main() {
	string sentence = "i hate coding";

	sentence.erase(0, 7); //(시작, 끝)
	                      //"i hate" 제거. sentence[0] ~ sentence[6]. 총 7개의 문자가 제거됨.

	cout << "i like " << sentence << endl;

	return 0;
}

/*
문자열 일부는 인덱스를 이용해 삭제할 수 있다.
erase 함수에 삭제할 영역의 시작 인덱스와 삭제할 문자 개수를 전달하면 해당 범위의 문자열은 삭제된다.
*/