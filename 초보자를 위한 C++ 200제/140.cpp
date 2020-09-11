//140
//typedef 사용하기
#include <iostream>

using namespace std;

enum State //enum을 선언하고 상수 값을 3개 추가한다. 별도로 상수에 값을 주지 않으면 0부터 순차적으로 값이 할당된다.
{
	kOpen,
	kClose,
	kDisconnect
};

typedef State state_; //typedef를 이용해 num State의 별명 state_를 선언한다.

struct Status //state_ 2개를 담는 구조체 Status를 선언하며 이 구조체의 별명을 status_ 로 설정한다.
{
	state_ machine1;
	state_ machine2;
} status_;

int main()
{
	//status_의 상태를 각각 설정하고 28,29번 라인에서 결과를 출력한다. typedef는 이외에도 함수나 긴 소스를 대체할 수 있어 C언어의 #define과 비교된다. 내가 원하는 형태로 자료형을 새로 정의할 수 있다는 측면에서 소스의 가독성을 높이는데 도움을 주는 키워드다.
	status_.machine1 = kOpen;
	status_.machine2 = kDisconnect;

	cout << "상태 : " << status_.machine1 << endl;
	cout << "상태 : " << status_.machine2 << endl;

	return 0;
}

/*
typedef는 원하는 형태로 별명을 주어 사용할 수 있다.
이미 정의된 자료형에 다른 이름을 부여할 수 있으며, 기존 자료형과 새로 정의된 이름은 똑같이 취급된다.
*/