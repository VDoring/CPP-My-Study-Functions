//078
//const 포인터 이해하기
#include <iostream>

using namespace std;

int main()
{
	int number1 = 10;
	int number2 = 20;

	int const *ptr1; //const int는 가리키는 대상을 변경할 순 있지만 값을 직접 바꿀 순 없다.
	                 //가리키는 대상을 변경할 수 있지만 가리키는 대상의 값은 변경할 수 없다는 의미이다.
	ptr1 = &number1;
	//ptr1 = number1;
	ptr1 = &number2;

	int *const ptr2 = &number1; //int를 가리키는 const포인터로 초기값이 반드시 필요하며 가리키는 대상을 바꿀 수 없다.
	                            //즉, * 위치에 따라 바꿀 수 없는 것이 달리진다.
	*ptr2 = number2;
	//*ptr = &number2;

	return 0;
}