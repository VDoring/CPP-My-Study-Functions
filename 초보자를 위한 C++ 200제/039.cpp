//039
//조건 순환문 이해하기[2](do~while~continue~break) 
#include <iostream>

using namespace std;

int main()
{
	int number =  0;
	
	do {
		number++; //무한 루프 방지용 
		
		if(number % 3 == 0)
			continue;
		else
			cout << "number 값 : " << number << endl;
	} while(number < 10); //무조건 한 번은 실행되고 특정 조건을 확인한다.
							//여기서 조건에 맞으면 반복 수행되고, 그렇지 않으면 한 번 수행된 것으로 do while문은 종료된다. 
		
	return 0;
}

/*
while문은 조건에 맞지 않는다면 단 한번도 수행하지 않지만,
do while문은 무조건 한 번은 실행된다. 그리고 조건에 맞춰 반복 수행된다.

그동안 한 번은 꼭 실행되는 것이 장점으로 인식되었는데, 최근엔 한 번 더 수행되는 점 때문에 사용 빈도가 줄어드는 추세이다.
"무조건 한 번은 실행된다"에서 "한 번 더 실행된다"라고 인식이 바뀐 것이다.

반복문이 한 번 더 수랭되면 백터와 같은 컨테이너들의 인덱스 문제 등이 있다.
그래서 되도록이면 do while 대신 for, switch, case, while 사용을 권장한다. 

*/
