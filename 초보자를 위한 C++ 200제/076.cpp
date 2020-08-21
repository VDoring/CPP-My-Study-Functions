//076
//Call by Address 이해하기
#include <iostream>

using namespace std;

//함수는 인자로 포인터를 받는데, 이 경우 함수 호출하는 곳에서는 주소를 명시적으로 전달해야 한다.
void Func1(bool *is_on)
{
	cout << "Call by address : " << sizeof(is_on) << endl;
}

//함수는 인자로 주소를 받는데, 이 경우 함수 호출하는 곳에서는 값을 그대로 넘긴다. 하지만 받는 측에서 포인터로 받는다.
void Func2(bool &is_on)
{
	cout << "Call by reference : " << sizeof(is_on) << endl;
}

int main()
{
	bool is_tmp = true;

	Func1(&is_tmp);
	Func2(is_tmp);

	return 0;
}