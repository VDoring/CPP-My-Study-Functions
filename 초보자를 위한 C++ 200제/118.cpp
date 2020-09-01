//118
//friend 클래스 사용하기(friend)
#include <iostream>
#include <string>

using namespace std;

//Info 클래스에서 GoodKing 클래스를 friend로 설정할 수 있도록 전방 선언을 한다.
class GoodKing;
class BadKing;

class Info
{
	friend class GoodKing; //friend 키워드를 이용해 GoodKing 클래스에 접근 권한을 풀어준다.
	                       //이떄 friend로 선언할 수 있는 클래스는 여러 개가 될 수도 있으며 클래스 개수에는 제한이 없다.

public:
	Info() { };

private:
	string achieve; //private로 선언된 string변수는 public으로 Info 클래스를 상속해도 접근할 권한은 없다.
};

//이 클래스는 접근 권한을 설정하지 않았기 때문에 기본값 private 형태로 Info 클래스를 상속 받는다.
//하지만 30,33번 라인에도 보이듯 friend 클래스로 선언되었으므로 자유롭게 private 변수에 접근할 수 있다.
class GoodKing : Info
{
public:
	GoodKing() { achieve = "백제 중흥 군주 근초고왕"; };
	void Display()
	{
		cout << achieve << endl;
	}
};

class BadKing : public Info //이 클래스는 public으로 Info를 상속 받지만 43번 라인처럼 private 변수에 접근할 수 없다.
{
public:
	BadKing() {};
	void Display()
	{
		//cout << achieve << endl; //에러
	}
};

int main()
{
	GoodKing king1; //friend 선언에 따른 결과를 비교한다. GoodKing 클래스는 Info 클래스의 friend로 선언되었기에 private 변수 achive에 접근할 수 있다.
	                //하지만 BadKing 클래스는 private 변수에 접근할 수 없어서 42번 라인에서 에러가 발생한다.
	king1.Display();

	BadKing king2;
	king2.Display();

	return 0;
}

/*
private는 외부에서 접근할 수 없도록 지정하는 키워드이다. 하지만 예외적으로 특정 클래스를 대상으로 이 접근 권한을 풀어줄 수 있다.
*/