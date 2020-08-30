//111
//static 클래스 이해하기
#include <iostream>

using namespace std;

static class Calculator //프로그램 어디에서든 접근할 수 있는 static 클래스를 선언한다.
{
public:
	int Plus(const int x, const int y) const //두개의 인자를 받아 더한 뒤 반환하는 함수이다. 이 클래스 함수에서는 데이터를 저장할 필요 없이 결과를 위해 연산만 수행한다.
	{
		return x + y;
	}
}calc; //static 클래스를 이용하려면 해당 클래스를 가리키는 변수가 필요하다.

int main()
{
	cout << "1 + 2 = " << calc.Plus(1, 2) << endl; //static 클래스를 이용해 1 더하기 2의 결과를 가져온다.
	                                               //이처럼 static 클래스에는 데이터를 저장할 필요 없이 연산 결과만 알려주는 함수만 모아두는 것이 좋다.
	                                               //이런 클래스는 나중에 Utility, Calculator 등 목적에 따라 분리하여 사용할 수 있다.

	return 0;
}

/*
굳이 저장할 필요가 없는 데이터나 단순 연산으로 결과만 얻고 싶은 기능이 있다면 static 클래스에 모아두는 것이 좋다.
어느 클래스에서나 사용이 필요하고 단순히 연산 결과만 알고싶다면 유용하게 사용할 수 있다.
*/