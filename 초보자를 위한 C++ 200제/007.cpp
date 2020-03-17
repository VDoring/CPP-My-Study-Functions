//007
//자료형 이해하기(chat, int, double, bool, string)
#include <iostream>
#include <string> //문자열 자료형인 string을 사용하기 위함
				//string은 일반적인 자료형이 아니라 클레스이기 때문

using namespace std;

int main() {
	char character = 'C'; //char는 문자 하나만 저장 가능
	int integer = 100;
	double precision = 3.14159;
	bool is_true = true;
	string word = "Hello World!"; //값을 할당할 때에는 더블 퀘테이션(")을 앞뒤애 붙인다

	cout << "char: " << character << endl;
	cout << "int: " << integer << endl;
	cout << "double: " << precision << endl;
	cout << "bool: " << is_true << endl;
	cout << "string: " << word << endl;

	return 0;
}