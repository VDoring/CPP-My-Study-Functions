//108
//클래스 생성자 초기화 리스트
#include <iostream>
#include <string>

using namespace std;

class TmpClass //클래스 TmpClass를 선언한다.
{
public:
	TmpClass() : number1(10), number2(20), name("나운 : 문자명왕 이름") {} //클래스 생성자 초기화 리스트에서 변수를 초기화한다.
	                                                                       //쉼표를 이용해 여러 변수를 초기화할 수 있다.
	                                                                       //생성자 초기화 리스트에서는 생성자가 호출되는 시점에 변수 값을 설정하기 때문에 이전 값은 무시하고 새로운 값으로 할당된다.

	void Print()
	{
		cout << number1 << ", " << number2 << ", " << number3 << ", " << name << endl;
	}

private: //클래스의 내부 변수를 선언하는데, 선언과 동시에 초기화할 수 있다.
	int number1 = 1;
	const int number2 = 2;
	static const int number3 = 3;
	string name = "조다 : 장수왕 아들";
};

int main()
{
	TmpClass tc; //클래스 객체를 생성하고 public 함수 Print를 호출하여 변수를 출력한다.
	tc.Print();  //선언과 함께 초기화했던 값 대신 생성자 초기화 리스트 값으로 출력되는 것을 확인할 수 있다.

	return 0;
}