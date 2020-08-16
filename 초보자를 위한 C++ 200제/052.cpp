//052
//지나간 시간 알아내기(time)
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	//time_t 변수 선언후 시간을 초기화한다.
	time_t start = time(NULL);
	time_t finish = time(NULL);

	int pass_int = 1;

	//시작시간을 설정한다. 타임 워치로 비교했을 떄, time(&start)를 코드에 삽입할 경우 그 시점의 시간이 start에 할당된다.
	//즉, 타임 워치 처음 작동 시간이 그 시점이 되는 것이다.
	time(&start);

	//정수 1에 1을 더하는 작업을 100억 번 반복한다.
	for (int i = 1; i < 100000; i++) {
		for (int j = 1; j < 100000; j++)
			pass_int += 1;
	}

	//더하기 반복 작업이 경과된 시간을 알아내기 위해 현재 시간을 finish변수에 저장한다.
	//타임 워치로 비교했을 떄, 종료 시점을 의미한다.
	time(&finish);

	//현재 시간에서 처음 시작 시간을 뺀다. 그러면 지나간 시간을 초 단위로 알아낼 수 있다.
	//difftime함수는 두 시간을 비교해 그 결과를 알려준다.
	//반환값은 초 단위로 종료 시간에서 시작 시간을 뺴야 경과 시간이 출력된다.
	cout << "1을 100억번 더하는 시간 : " << difftime(finish, start) << "초\n";

	return 0;
}