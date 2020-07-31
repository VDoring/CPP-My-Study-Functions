//032
//중첩 조건문 이해하기(if~else if~else) 
#include <iostream>

using namespace std;

int main()
{
	int number1 = 100;
	int number2 = 6;
	
	if(number1 < number2)
		cout << "number2가 더 큽니다" << endl;
	else if(number1 > number2)
		cout << "number1이 더 큽니다" << endl;
	else
		cout << "number1과 number2는 같습니다" << endl;
	
	if(number2 < 7)
	{
		if(number2 > 3)
		{
			if(number2 == 4)
				cout << "number2는 4입니다" << endl;
			else if(number2 == 5)
				cout << "number2는 5입니다" << endl;
			else
				cout << "number2는 6입니다" << endl;
		}
		else
		{
			if(number2 == 3)
				cout << "number2는 3입니다" << endl;
			else if(number2 == 2)
				cout << "number2는 2입니다" << endl;
			else
				cout << "number2는 1입니다" << endl;
		}
	}
		
	return 0;		
}

/*
if문에는 조건을 여러 개 두어 중첩하여 사용할 수 있다.
else if 문에는 또 다른 조건을 설정할 수 있다.

다만, else if를 한번 사용하는 것은 괜찮지만 2번, 3번 사용하는 것은 지양한다.
조건문을 일일이 비교하다 보면 PC(프로그램 카운터)가 증가하여 프로그램 성능에도 좋지 않고 조선문이 실어지면 가독성도 떨어지기 때문이다.

만약 중첩 조건문의 조선이 2개 이상이면, switch case문 사용을 권장한다.
(12~17라인은 올바른 if else 중첩문이나 19~39라인은 권장하지 않는다) 

*/
