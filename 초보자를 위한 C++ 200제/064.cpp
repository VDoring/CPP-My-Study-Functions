//064
//문자열을 숫자로 변환하기(stringstream)
#include <iostream>
#include <sstream> //stringstream 을 사용하기 위해 include.

using namespace std;

int main() {
	stringstream ss; //stringstream 변수 선언

	double number1 = 0.0;

	ss << "1.2,2.6-3.8!4.7=8.9"; //stringstream 변수에 실수와 특수문자로 이루어진 문자열을 추가.

	cout << "== string to double ==" << endl;
	while (!ss.eof()) //stringstream을 다 읽지 않았을시 반복된다.
	{
		ss >> number1; //ss변수에서 숫자를 읽어 실수형 변수 number1에 할당한다.
		ss.ignore(); //while문에서 ss는 처음 데이터를 읽고 다시 처음으로 돌아가 데이터를 읽기 때문에 중간에 ignore를 호출하여 다음 데이터를 읽을 수 있도록 한다.
		             //만약 ignore를 호출하지 않는다면 첫 데이터를 계속 읽기 때문에 무한루프에 빠진다.

		cout << number1 << ", ";
	}

	ss.clear(); //현재 상태를 정리한다. (현재 ss변수는 파일을 끝까지 읽은 상태. 즉, 더 읽을 수 없는 상태.)
	ss.str(""); //ss 변수의 데이터를 초기화한다.
	ss << "1, " << "2" << 3 << " " << 4; //ss변수에 정수를 추가한다. ss변수에 추가되는 문자열 데이터는 "1,23 4"이다.

	int number2 = 0;

	cout << endl << "== string to int ==" << endl;
	while (!ss.eof())
	{
		ss >> number2;
		ss.ignore();

		cout << number2 << ", ";
	}

	return 0;
}