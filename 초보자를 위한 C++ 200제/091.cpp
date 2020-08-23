//091
//구조체 초기화하는 방법 2
#include <iostream>

using namespace std;

//정수형 변수를 보유한 구조체 선언
struct Data1
{
	int number;
};

//다른 구조체와 정수형 변수를 보유한 새 구조체를 선언한다.
struct Data2
{
	Data1 data1; //구조체 안에 다른 구조체를 선언하여 사용할 수 있다.

	int number;
} data2;

int main()
{
	Data1 data1 = { }; //{ }의 의미 : 내부 변수를 모두 초기화.
	                   //int는 0으로 초기화되며, data1 변수는 26라인에서 인자로 사용된다.

	Data2 data2{ data1, 10 }; //구조체를 초기화하는 다른 방법.
	                          //{ } 안에 선언된 순서에 맞춰 인자를 전달하여 초기화한다.
	                          //Data1 변수, int 변수가 차례로 선언되었기 떄문에 인자도 data1, 10의 순서에 맞춰 전달해야 에러가 발생하지 않는다.

	//data2 변수의 내용을 출력.
	cout << "Data1 number : " << data2.data1.number << endl;
	cout << "Data2 number : " << data2.number << endl;
}