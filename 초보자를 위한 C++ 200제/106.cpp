//106
//클래스 복수 생성자 정의하기
#include <iostream>
#include <string>

using namespace std;

class KingInfo
{
public:
	KingInfo() //인자가 없는 클래스 생성자로 string 변수를 초기화한다.
	{
		value_ = "조선 성종 이혈";
	}

	KingInfo(const string value) //인자로 문자열을 받아 string 변수에 대입하여 초기화한다.
	{
		value_ = value;
	}

	KingInfo(const int value) //인자로 정수를 받아 다른 문자열과 조합하여 string 변수를 초기화한다.
	{
		value_ = "연산군 즉위연도 : ";
		value_ += to_string(value);
	}

public:
	string GetValue() const //내부 변수 value_를 반환하는 public 함수를 선언한다.
	{
		return value_;
	}

private:
	string value_;
};

int main()
{
	//클래스 객체를 생성한다.
	//객체들은 생성될 때 인자를 다르게 두어서 서로 호출하는 생성자가 다르다.
	//이 객체들은 같은 함수 GetValue를 호출하지만 객체 생성 시 호출한 생성자가 다르므로 출력되는 값도 다르다.
	KingInfo king_info1;
	KingInfo king_info2("조선 연산군 이융");
	KingInfo king_info3(1494);

	cout << king_info1.GetValue() << endl;
	cout << king_info2.GetValue() << endl;
	cout << king_info3.GetValue() << endl;

	return 0;
}