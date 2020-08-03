//038
//조건 순환문 이해하기[1](while~continue~break) 
#include <iostream>

using namespace std;

int main()
{
	int number = 0;
	
	while(number < 10) //number의 값이 10보다 작다면 실행 
	{
		number++; //값을 높이지 않으면 무한루프에 빠지게 된다. 
		
		if(number % 3 == 0)
			continue;
		else
			cout << "number 값 : " << number << endl;
	}
	
	return 0;
}

/*
for문은 특정 범위 안에서 반복하지만,
while문은 특정 조건으로 반복한다.

while도 for처럼 continue와 break를 사용할 수 있다.

*/
