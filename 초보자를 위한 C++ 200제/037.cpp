//037
//조건 선택문 이해하기(switch~case~default) 
#include <iostream>

using namespace std;

int main()
{
	int number = 3;
	
	switch(number) //사용할 값을 받는다 
	{
		case 1:
			cout << "number의 값은 1입니다." << endl;
			break;
			//선택문 종료 역할. 
			//break가 없으면 해당 조건을 수행 후 바로 밑 조건을 실행한다. 
		case 2:
			cout << "number의 값은 2입니다." << endl;
			break;
		case 3:
			cout << "number의 값은 3입니다." << endl;
			break;
		default:
			cout << "number의 값을 알 수 없습니다." << endl;
			break;
	}
	
	return 0;
}

/*
if else 문장이 길어지면 가독성에 문제가 생기고 PC(프로그램 카운터)증가로 성능에 좋지 않은 영향을 미치기 때문에
switch case문을 사용하는 것이 좋다.

*/
