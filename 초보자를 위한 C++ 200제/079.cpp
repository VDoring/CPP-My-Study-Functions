//079
//enum 이해하기
#include <iostream>

using namespace std;

//상수 집합을 선언하고 4개의 값을 추가한다. 요소는 , 로 구분하고 값을 설정하지 않아도 자동으로 할당한다.
enum Status
{
	normal = 0,
	abnormal,
	disconnect = 100,
	close
};

int main()
{
	Status number = close; //열거형 enum의 현재 값을 close로 선언한다.

	//enum의 요소들은 정수형 값을 갖는다.
	//각 요소는 이전 요소의 값보다 자동으로 1이 커진다. (normal이 0이라면 abnormal은 1이다. disconnect 값이 100이라면 close는 101이다.)
	if (number == Status::normal) //enum은 이렇게 값 호출이 가능하다.
		cout << "Status : normal" << endl;
	else if (number == abnormal) //enum은 이렇게 요소 이름만으로도 사용할 수 있다.
		cout << "Status : abnormal" << endl;
	else if (number == 101) //enum은 이렇게 정수로도 사용할 수 있다.
		cout << "Status : disconnect" << endl;
	else
		cout << "Status : close" << endl;

	return 0;
}