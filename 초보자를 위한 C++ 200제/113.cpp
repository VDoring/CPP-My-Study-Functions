//113
//객체지향 캡슐화 이해하기(Encapsulation)
#include <iostream>
#include <string>

using namespace std;

class KingInfo
{
public:
	KingInfo() { };

public:
	void SetValue(const string name, const string son, int ascend) //정보은닉 때문에 바로 접근할 수 없는 클래스 변수를 위해 set함수를 선언한다.
	{
		name_ = name;
		son_ = son;
		ascend_ = ascend;
	}

	string GetNameSon() const //만약 왕의 묘호와 아들 이름만 궁금하다면 24번 라인처럼 두 변수만 이용해 결과값을 만들 수 있다.
	{
		return name_ + "의 아들 " + son_;
	}

	string GetNameAscend() const //23번 라인과 유사한 기능을 하는 함수이다. 캡슐화는 이처럼 사용자가 원하는 형태로도 가공해 목적이 비슷한 변수들을 조합해 사용할 수 있다.
	{
		return name_ + " 즉위 연도 " + to_string(ascend_) + "년";
	}

private:
	string name_;
	string son_;
	int ascend_;
};

int main()
{
	KingInfo king_info; //클래스 객체를 생성하여 생성자에 인자 3개를 전달한다.
	king_info.SetValue("선조", "광해군", 1567);

	//사용 방법에 따라 출력 결과가 다르다. 켑슐화의 목적은 사용 방법에 따라 기능을 모으는 것이다.
	cout << king_info.GetNameSon() << endl;
	cout << king_info.GetNameAscend() << endl;

	return 0;
}

/*
캡슐화의 목적은 용도가 비슷한 데이터들을 모아 한데 이용하는 것이다.
비슷한 용도끼리 모아두면 코드 재활용성도 높아지고 정보은닉도 이루어지는 장점이 있다.
*/