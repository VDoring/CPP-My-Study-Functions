//138
//atomic 사용하기(atomic_compare_exchange_weak)
#include <iostream>
#include <atomic> //atomic을 사용하기 위해 include

using namespace std;

int main()
{
	atomic<int> data1(10); //atomic 변수 선언

	int number = 20; //정수형 변수 선언

	bool is_excharge = data1.compare_exchange_weak(number, 30); //compare_exchange_weak는 값 교체가 이루어지면 true, 그렇지 않으면 false를 리턴한다. 함수의 첫 번쨰 인자 number와 data1의 값이 같지 않다면 data1은 변경되지 않는다. 그리고 number는 data1의 값을 갖게 된다. 즉 data1 10이 number 20과 같지 않다면 data1은 10을 유지하고, number는 data1의 값 10을 갖게 된다.

	cout << boolalpha; //10과 20은 같지 않기 때문에 number에는 data1의 값인 10이 할당된다.
	cout << "data1 : " << data1 << ", number : " << number << ", " << is_excharge << endl; //결과는 10,10,false

	atomic<int> data2 = ATOMIC_VAR_INIT(10); //새로운 atomic 변수를 선언한다. number가 갖고 있는 10과 같은 값이다.

	is_excharge = atomic_compare_exchange_weak(&data2, &number, 40); //첫번쨰 인자와 두번쨰 인자를 비교하여 값이 똑같다면 data2에는 40이 할당되고 number는 값이 변경되지 않는다.

	cout << "data2 : " << data2 << ", number : " << number << ", " << is_excharge << endl; //결과는 40,10,true

	return 0;
}