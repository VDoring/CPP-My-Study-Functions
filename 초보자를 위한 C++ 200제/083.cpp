//083
//1차원 배열 함수 인자 사용하기
#include <iostream>

using namespace std;

//int *arr 형태로 인자를 받는 함수를 선언한다.
void Print1(int *arr)
{
	cout << "== Print1 ==" << endl;
	cout << arr[0] << ", " << arr[1] << ", " << arr[2] << endl; //[]를 이용해 배열의 데이터 출력

	arr[1] = 1000;
}

//int arr[] 형태로 받는 차이점이 있지만 위의 함수와 똑같다.
void Print2(int arr[])
{
	cout << "== Print2 ==" << endl;
	cout << arr[0] << ", " << arr[1] << ", " << arr[2] << endl;

	arr[2] = 2000;
}

int main()
{
	int data[3] = { 0,1,2 };

	Print1(data); //0,1,2
	Print2(data); //0,1000,2

	cout << "== 결과 ==" << endl;
	cout << data[0] << ", " << data[1] << ", " << data[2] << endl; //0,1000,2000

	return 0;
}

/*
일반 변수를 인자로 사용할 수 있듯이 배열도 인자로 사용할 수 있다.
이떄 배열을 인자로 사용할 수 있는 방법에는 2가지가 있는데, 둘 다 똑같은 의미이다.
함수는 인자를 int *arr, 또는 int arr[]로 받을 수 있는데 똑같이 포인터로 받아 처리하기 때문에 함수 내부에서 사용하는 방법 또한 똑같다.

*/