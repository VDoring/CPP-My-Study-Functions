//134
//Thread 사용하기(join, sleep)
#include <iostream>
#include <thread>
#include <chrono> //boost에 속해있던 것이었으나 C++ 표준을 새로 제정하면서 chrono를 포함했으며, 비주얼 스튜디오 2012부터 사용할 수 있다.

using namespace std;

void Pause(int sec) //정수형 변수를 인자로 받는 함수를 선언한다. 그리고 현재 스레드를 멏초간 멈추도록 this_thread::sleep_for 함수를 이용한다. 인자는 chrono 라이브러리를 이용한다.
{
	this_thread::sleep_for(chrono::seconds(sec)); //chrono::seconds(2s)로도 변경하여 사용할 수 있다.
}

int main()
{
	//스레드 3개를 선언하며 동작할 함수로 Pause를 지정한다. Pause의 인자로 각각 3,4,5를 전달한다. 이떄 사용하는 함수 인자는 가변이라 호출할 함수의 인자 개수에 맞춰 넘길 수 있다.
	thread sleep1(Pause, 3);
	thread sleep2(Pause, 4);
	thread sleep3(Pause, 5);

	sleep1.join(); //스레드를 시작하기 위해 join 함수를 사용한다.
	cout << "3초 대기" << endl;

	sleep2.join();
	cout << "4초 대기" << endl;

	sleep3.join();
	cout << "5초 대기" << endl;

	return 0;
}

/*
스레드는 한 프로세스에서 실행되는 단위이다.
프로세스 내부적으로 여러 스레드들은 한정된 시스템 자원을 공유 또는 독점한다.
스레드를 제어하는 주체는 OS 스케줄러로 동작 방식은 CPU사양에 따라 다르다.
스레드는 프로세스가 더 많고 복잡한 작업을 위해 탄생한 실행 단위이기도 한다.
*/