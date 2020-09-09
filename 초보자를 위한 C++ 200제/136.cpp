//136
//atomic 사용하기(init,store,load)
#include <iostream>
#include <atomic> //atomic을 사용하기 위해 include

using namespace std;

int main()
{
	atomic<int> data1 = 10; //atomic을 사용하는 방법이다. 일반 정수형 변수처럼 = 연산자를 이용해 값을 할당할 수 있다.
	atomic<int> data2 = ATOMIC_VAR_INIT(20); //위 라인보다 직관성을 높이고 보다 명확하게 선언하려면 ATOMIC관련 지시문을 사용할 수도 있다.
	atomic<int> data3 = ATOMIC_VAR_INIT(30); //atomic<int>와 atomic_int는 똑같은 의미이다. 초기화 방법은 이렇게 총 3가지이다.

	cout << data1 << ", " << data2 << ", " << data3 << endl; //결과 출력. 10,20,30

	data1.store(11); //store는 = 연산자와 똑같은 의미이다. data값은 11로 변경된다.
	data2.store(data3.load()); //data2의 store를 호출하며 인자로 data3의 값을 전달한다. Load는 해당 값을 불러온다는 의미이다.

	atomic_store(&data3, 50); //store와 atomic_store는 똑같은 의미이다. 다만 atomic_store는 첫 번쨰 인자로 값을 저장할 변수 이름, 두 번쨰 인자로 값을 받는다.

	cout << data1 << ", " << data2 << ", " << data3 << endl; //결과를 출력한다. 11,30,50

	return 0;
}

/*
여러분의 경험이 늘어 네트워크, 멀티 스레딩 환경에서 프로그래밍을 할 때, 세마포어, 뮤텍스, violate 등 공유 자원을 사용하기 위한 여러 기법을 활용할 것이다.
이 시리즈에선 해당 항목을 다루진 않지만 그떄 필요한 클래스인 atomic 활용 방법은 소개하겠다.

atomic으로 인터락 등을 활용해 동기화 객체를 사용하기 위한 기법들을 생략하면 더 쉽게 프로그래밍할 수 있다.
이 장에서는 atomic으로 int 산술연산하는 방법을 소개한다.
*/