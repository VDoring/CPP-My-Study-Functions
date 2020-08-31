//114
//객체지향 상속 이해하기(Inheritance)
#include <iostream>
#include <string>

using namespace std;

class Info //공통으로 사용할 요소를 모은 Info 클래스를 선언한다. 아무리 못된 왕이라 해도 위대한 왕이 갖는 요소 중 일부는 겹칠 수밖에 없다. 왕호와 즉위 연도는 공통 요소이다.
{
public:
	Info() { };

public:
	string name_;
	int year_;
};

class GoodKing : public Info //Info 클래스를 상속받는 새로운 클래스를 선언한다. Info 요소들은 public으로 사용한다는 의미로 Info 앞에 public 키워드를 붙인다.
{
public:
	GoodKing(const string country) : country_(country) {};
	void Display()
	{
		cout << country_ << " " << name_ << " 즉위 연도 BC : " << year_ << endl;
	}

private:
	string country_;
};

class BadKing : public Info //Info 클래스를 상속받는 새로운 클래스를 선언한다. 만약 Info 클래스가 없었다면 두 클래스에는 공통적으로 13,14번 라인이 추가되어 중복 소스가 늘어난다. 하지만 Info 클래스 상속으로 코드 중복을 줄이게 되었다.
{
public:
	BadKing(const string country) : country_(country) {};
	void Display()
	{
		cout << country_ << " " << name_ << " 즉위 연도 : " << year_ << endl;
	}

private:
	string country_;
};

int main()
{
	GoodKing king1("고조선"); //서로 다른 클래스의 객체를 생성했지만 name_, year_ 요소에 공통적으로 접근할 수 있다. GoodKing, BadKing 클래스 내부에는 두 변수를 선언하지 않았지만 Info 클래스를 상속받았기 때문이다.
	king1.name_ = "단군왕검";
	king1.year_ = 2333;

	BadKing King2("고려");
	King2.name_ = "충혜왕";
	King2.year_ = 1330;

	king1.Display();
	King2.Display();

	return 0;
}

/*
우리 역사 속에는 위대한 왕과 못된 왕이 존재한다.
이 왕들을 설명할 떄 공통적으로 왕호, 즉위 연도 등의 사항을 이야기한다.
아무리 나쁜 왕이라 해도 좋은 왕을 설명할 때 이야기하는 일부 요소는 겹칠 수 밖에 없다.

객체지향 프로그래밍에서는 이렇게 겹치는 요소만 따로 분라하여 사용한다.
겹치는 요소를 매번 선언하는 것 보다 이 요소들을 미리 선언해 두고 다른 클래스에서 이 클래스를 상속받아 사용하는 것이다.
*/