//147
//tuple 사용하기(tie)
#include <iostream>
#include <tuple>
#include <string>

using namespace std;

int main()
{
	typedef tuple<string, int, double> Data; //typedef를 이용해 tuple을 정의한다. Data 튜플은 string, int, double까지 3개의 자료형을 저장한다.

	Data data1("문자열", 10, 1.2); //튜플 Data의 객체를 만들어 값을 초기화한다.

	string my_str = "";
	int my_int = 0;

	tie(my_str, my_int, ignore) = data1; //tie 함수를 선언하며 my_str, my_int, ignore를 인자로 전달한다.
	                                     //my_str엔 튜플의 첫 번쨰 데이터인 string "문자열"이 저장되고, my_int에는 두 번쨰 인자인 int 10이 저장된다. ignore는 값을 가져오지 않을 때 입력한다.
	                                     //결과는 문자열, 10 이다.

	cout << my_str << ", " << my_int << endl;

	return 0;
}
