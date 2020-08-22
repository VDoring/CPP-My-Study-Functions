//080
//enum class 이해하기
#include <iostream>

using namespace std;

//enum 선언
enum Status
{
	normal = 0,
	abnormal,
	disconnect = 100,
	close
};

//enum class를 선언해 char 형태로 정의한다.
//enum은 정수형 값을 가질 수 있어 int와 char형태로 선언할 수 있다.
enum class MachineStatus : char //여기에 자료형을 명시하지 않으면 기본적으로 int형태로 사용할 수 있다.
{
	normal = 'n',
	abnormal,
	disconnect = 100,
	close
};

int main()
{
	MachineStatus machine = MachineStatus::abnormal; //enum과는 다르게 반드시 enum class 요소를 사용하려면 enum class 이름을 먼저 기입해야한다.
	                                                 //enum class는 같은 이름의 요소를 여러 곳에서 사용할 수 있도록 지원하기 때문에 어느 열거형의 어느 요소인지를 명확하게 기입해야 한다.

	if (machine == MachineStatus::normal)
		cout << "Status : normal" << endl;
	else if (machine == MachineStatus::abnormal)
		cout << "Status : abnormal" << endl;
	else if (machine == MachineStatus::disconnect)
		cout << "Status : disconnect" << endl;
	else
		cout << "Status : close" << endl;

	cout << "machine : " << static_cast<int>(machine) << ", " << static_cast<char>(machine) << endl;

	return 0;
}

/*
enum class는 enum의 한계를 극복하기 위해 만들어졌다.
enum 요소에 속하는 상수들은 일반 변수들처럼 이름이 겹치면 안 되기 때문에 부득이 비슷한 이름으로 대체해 사용했었다.
하지만 enum class가 등장함으로써 같은 이름의 enum 요소를 사용할 수 있게 되었다.

*/