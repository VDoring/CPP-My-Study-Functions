//090
//구조체 초기화하는 방법 1
#include <iostream>

using namespace std;

//struct 키워드를 사용해 구조체를 선언한다.
struct Data1
{
	Data1(int x) : number(x) {} //이 라인에는 클래스 생성자와 비슷한 초기화 코드가 있다.
	                            //사용 방법도 클래스 생성자와 똑같이 29번 라인처럼 구조체 변수를 만들떄 인자로 정수를 넘기면 내부 변수가 해당 값으로 초기화된다.

	int number;
};

//구조체를 선언하며 내부 변수 number을 10으로 초기화한다.
struct Data2
{
	Data2()
	{
		number = 10;
	}

	int number;
} data2;

int main()
{
	Data1 data1(2);
	cout << "Data1 number : " << data1.number << endl;
	cout << "Data2 number : " << data2.number << endl;

	return 0;
}