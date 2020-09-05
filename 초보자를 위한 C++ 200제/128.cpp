//128
//가변인자 템플릿 사용하기(typename... T)
#include <iostream>
#include <string>

using namespace std;

void Type1(string msg, int no, double value) //인자 3개를 받아 차례대로 출력하는 함수이다.
{
	cout << msg << ", 에러 번호 " << no << ", 오류값 " << value << endl;
}

void Type2(int no, double value) //인자 2개를 받아 차례로 출력하는 함수이다.
{
	cout << no << ", 오류값" << value << endl;
}

template<typename... T> //template 키워드를 사용해 <>안에 typename T를 기입한다. typename 뒤에 붙은 ...은 인자의 개수가 정해지지 않았다는 것을 의미한다.
void PrintLog(T... arg0) //PrintLog 함수에도 ...을 붙여 역시 인자 개수가 정해지지 않았음을 선언한다. 24번 라인에도 ...이 사용되는데 들어오는 인자 모두를 Type1 함수로 전달한다는 의미이다.
{
	//추가 작업
	Type1(arg0...);
	//Type2(arg0...);
}

int main()
{
	PrintLog<string, int, double>("Warning", 100, 22.5); //가변인자 템플릿을 사용할 땐 이 라인처럼 <> 괄호 안에 자료형 타입을 정의해야 한다. 그리고 자료형에 맞춰 인자를 전달해야 오류없이 함수 호출을 할 수 있다.
	//PrintLog<int, double>(101, 55.6);

	return 0;
}

/*
기존에는 인자 개수가 변하면 호출하는 함수의 인자 개수도 똑같니 맞춰 수정을 해야 했었다.
하지만 가변인자 템플릿을 사용하면 PrintLog와 같은 함수는 원형을 유지해도 된다.
오히려 다른 함수의 인자를 수정하여 사용할 수 있어 코드가 더 유연해 질 수 있다.
*/