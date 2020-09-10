//137
//atomic 사용하기(exchange)
#include <iostream>
#include <atomic> //atomic을 사용하기 위해 include

using namespace std;

int main()
{
	atomic<int> data1(10);
	atomic<int> data2 = ATOMIC_VAR_INIT(20);
	atomic<int> data3 = data1.exchange(data2.load()); //data1의 exchange 함수를 호출하며 인자로 data2의 값을 전달한다. data1은 data2의 값으로 교체되고 data3에는 리턴값(data1의 원래 값) 10이 할당된다. exchange 함수의 리턴값은 변경되기 이전값이다.

	cout << data1 << ", " << data2 << ", " << data3 << endl; //결과 출력. 20,20,10

	//atomic_exchange 함수는 12번 라인의 data1.exchange 함수와 기능이 똑같다. 첫 번쨰 인자는 변경할 atomic 변수고 두번쨰 인자는 변경할 값이다.
	atomic_exchange(&data1, data3);
	atomic_exchange(&data2, data1.load());
	atomic_exchange(&data3, 55);

	cout << data1 << ", " << data2 << ", " << data3 << endl; //결과 출력. 10,10,55

	return 0;
}