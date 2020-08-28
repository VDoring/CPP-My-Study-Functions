//104
//클래스 정의하기(class)
#include <iostream>
#include <string>

using namespace std;

class KingInfo //class를 선언할 떄는 키워드 class, class의 이름을 차례로 적는다.
{

//객체지향 언어에는 3가지 접근자가 존재한다.
//1. public : 공개된 정보. 외부 접근 허용
//2. protected : 제한된 정보. 해당 클래스나 서브 클래스에서만 접근 허용
//3. private : 제한된 정보. 해당 클래스에서만 접근 허용

public: //public 영역에 있는 두 함수(SetName,Getname)는 외부에서 접근이 가능한 함수이다.
	void SetName(string name)
	{
		name_ = name; //외부에서 접근할 수 없는 private에 있는 string 변수 값을 설정하거나 반환한다.
	}

	string Getname() const
	{
		return name_;
	}
	
private: //private 영역에 있으면 외부에서 접근할 수 없다. 내부에서만 접근 가능
	string name_;
};

int main()
{
	KingInfo king_info; //클래스의 객체를 생성한다.

	king_info.SetName("조선 세조 이유"); //클래스 public 멤버 함수에 문자열을 설정한 인자를 전달한다.
	                                     //이처럼 변수를 선언하고 get,set 함수를 따로 두는 이유는 객체지향 언어의 특성 중 하나인 정보은닉 때문이다.

	cout << king_info.Getname() << endl;

	return 0;
}

/*
클래스는 유형별로 분리된 독립된 공간이라 할 수 있다.
예를 들어 회사란 클래스가 있다면 회사 사업 아이템, 회사 직원, 회사 내부 조직 등은 클래스를 구성하는 요소라 할 수 있다.
유사한 요소들을 하나로 모으는 이름을 클래스라 부를 수도 있는 것이다.

그리고 회사는 하나가 아니라 복수이기 때문에 비주얼 스튜디오를 제작해 판매하는 마이크로소프트는 회사란 클래스로 정의할 수 있는 하나의 객체가 된다.
아이폰을 제작하는 애플은 또 다른 객체가 되는 것이고 여러분이 다니는 회사도 또 하나의 객체가 된다.
즉, 하나의 실사례이기 때문에 각기 다른 유형의 객체를 구분해 분리할 수 있다.
*/