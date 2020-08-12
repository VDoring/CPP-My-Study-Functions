//049
//난수 생성하기(srand, rand)
#include <iostream>
#include <ctime>

using namespace std;

int main() {
	//난수의 seed를 심는 과정. 시간을 초기화해 난수가 항상 똑같지 않도록 한다 
	srand(static_cast<unsigned int>(time(NULL)));
	
	//난수의 범위는 0~32767 이다.
	//rand()함수는 srand함수를 통해 변경된 seed값을 이용해 무작위로 값을 생성한다. 
	for(int i = 0; i < 5; i++) {
		cout << "난수 : " << rand() << endl;
	}
	
	return 0;
}

/*
난수를 구할 떈 해당 정보를 프로그램 안에서 한 번은 초기화해야 한다.
난수를 구하기 위해선 seed라 불리는 어떤 값이 필요한데, 보통은 시스템 시간을 시용한다.
seed를 기준으로 무작위로 값을 생성하기 떄문에 seed는 계속 바뀌어야 한다.
그렇지 않다면 난수임에도 항상 같은 결과가 출력된다. 

rand함수는 진정한 의미의 난수가 아니다.
그래서 C++11부터 여러 난수 생성기를 제공하고 있다.

[C++ 난수 엔진 템플릿] 
1.random_device
2.linear_congurential_engine
3.mersenne_twister_engine
4.subtract_with_carry_engine
*/
