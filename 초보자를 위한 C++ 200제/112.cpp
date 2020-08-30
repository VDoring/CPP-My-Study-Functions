//112
//객체지향 정보은닉 이해하기(hiding)
#include <iostream>
#include <string>

using namespace std;

class KingInfo
{
public:
	KingInfo() { };

public: //31번 라인의 value_ 변수는 privatr 멤버 변수로 외부에서 접근할 수 없다. 그래서 get, set 함수를 따로 두어 변수 제어 권한을 분리한다.
	void SetValue(const string value)
	{
		if (value.empty() == false)
			value_ = value;
		else
			cout << "잘못된 인자!" << endl;
	}

	string GetValue() const
	{
		if (value_.empty() == false)
			return value_;
		else
			return "설정을 먼저 해주세요";
	}

private:
	string value_;
	int number_; //number_ 변수는 private 멤버 변수로 외부에서 제어할 수 없다. 또한 외부에서 이 변수를 제어할 함수도 없다.
	             //그래서 number_ 변수는 결코 외부에서 사용할 수 없고 내부에서만 제어가 가능한 변수이다. 외부에서 number_ 변수를 바라볼 수도 없기 때문에 정보인닉에 부합한다.
};

int main()
{
	KingInfo king_info1; //클래스 객체를 만들고 SetValue 함수를 이용해 value_ 변수에 값을 할당한다. value_ 변수는 private 속성으로 외부에서 접근할 수 없다. (에러발생)
	king_info1.SetValue("조선 중종 이역");

	KingInfo king_info2;
	king_info2.SetValue("조선 인종 이호");

	//king_info1.value_ = "조선 명종 이환"; //에러

	cout << king_info1.GetValue() << endl;
	cout << king_info2.GetValue() << endl;

	return 0;
}

/*
객체지향 언어의 특징 중 하나는 정보은닉이다.
정보은닉은 외부에서 클래스 내부를 바라보는데 제한을 두어 임의로 클래스 내부 데이터를 교체하지 못하도록 막는 것이 목적이다.

또한 사용자가 굳이 알지 않아도 되는 사항은 숨겨 꼭 필요한 정보로만 프로그래밍이 가능하도록 돕는다.
이처럼 제한된 사용 방법을 두면 소스 코드를 안전하게 관리할 수 있고 해당 코드와 상관없는 지점과 시기 떄문에 발생할 수 있는 데이터 수정, 추가 오류 등도 방지할 수 있다.
*/

/*
객체지향 프로그래밍에 대해선 여러 논란이 존재한다.
그중 하나가 재사용성과 정보은닉이다.

사실, 객체지향 언어가 등장하기 전에도 노련한 프로그래머들은 "라이브러리" 형태로 재사용 가능한 프로그램을 만들어 왔다.
라이브러리를 하나의 부품처럼 다뤘기에 객체지향 개념이 등장했을 당시 "뭐가 새로운 개념이지?"라며 냉소적인 반응을 보이기도 했다.
하지만 객체(인스턴스)와 다형성 개념 때문에 분명히 프로그래밍 기법으론 발전한 형태가 맞다고 생각한다.

또한 정보은닉은 감춰야 할 데이터 떄문에 get, set 함수를 남발해 낭비가 발생한다는 지적도 있다.
(이 책을 쓴 사람은 이점에 공감한다고 한다.)

변수를 직접 다루는 것과 public, get, set 함수를 다루는 것에 차이점은 무엇일까?

차라리 get, set 함수를 사용하지 않고 변수를 직접 제어하는 것이 더 효율적일 것이다.
그래서 interface를 활용하기도 한다. 구조적으로 외부에 공개(public 요소)할 요소를 미리 선언하는 프로그래밍 기법을 사용하는 것인데, 이 경우에도 고작 변수 한두 개 때문에 작업량을 늘려야 하는 낭비 요소가 존재한다.

사실, 이런 논란에 대해선 명확한 결론이 없다.
더 나은 코드를 짜기위해 노력해야한다.
*/