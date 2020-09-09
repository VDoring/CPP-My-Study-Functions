//135
//Thread 사용하기(detach)
#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void Pause(int sec) //(앞의 예제와 똑같은 함수이다)
{
	this_thread::sleep_for(chrono::seconds(sec));
	cout << sec << "초 대기" << endl;
}

int main()
{
	//thread 3개를 선언하며 동작할 함수로 Pause를 지정한다.
	thread sleep1(Pause, 3);
	thread sleep2(Pause, 5);
	thread sleep3(Pause, 4);

	//모든 스레드를 메인 스레드에서 분리하기 위해 detach를 호출한다.
	sleep1.detach();
	sleep2.detach();
	sleep3.detach();

	getchar(); //콘솔에서 키보드 입력을 대기하는 함수다.
	           //이 예제에서는 스레드가 모두 분리되었기 때문에 언제 종료될지 몰라 일부러 종료 메시지를 보기 위해 이 코드를 넣었다.

	return 0;
}

/*
detach는 메인 스레드에서 해당 스레드를 분리한다.
해당 스레드는 시작 후 종료되는 시점에 점유한 자원의 반환이 보증된다.
다만 detach로 분리된 스레드는 제어할 수 없기 때문에 이 스레드가 언제 어떻게 종료될지 예상하기 어렵다.
*/