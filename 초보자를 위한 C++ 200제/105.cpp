//105
//클래스 생성자 정의하기
#include <iostream>
#include <string>

using namespace std;

class KingInfo
{
public:
	KingInfo() //class 생성자를 선언한다. name_변수는 26번 라인에서 객체가 생성될 떄 11번 라인처럼 초기화된다.
	{
		name_ = "조선 예종 이황";
	}

public:
	string GetName() const
	{
		return name_;
	}
private:
	string name_;
};

int main()
{
	KingInfo king_info;

	cout << king_info.GetName() << endl;

	return 0;
}

/*
생성자는 클래스 객체가 만들어질 때 자동으로 호출된다.
생성자 이름은 클래스 이름과 똑같으며 리턴값과 인자는 있을 수도, 없을 수도 있다.
*/