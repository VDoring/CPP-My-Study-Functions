//117
//클래스 상속[3] Not-A 관계
#include <iostream>

using namespace std;

class Landload //관계를 설명하는 클래스 2개를 선언한다.
{
public:
	void IamLandload() { cout << "걷물주입니다" << endl; }
};

class MaleMonkey
{
public:
	void Favorite() { cout << "Favorite : Female Monkey" << endl; }
};

class Nation : public Landload //Nor-A 관계를 피하고 자연스러운 관계를 표현하기 위해 Landload 클래스를 상속한다.
{
public:
	void Who()
	{
		cout << "안녕하세요. ";
		IamLandload();
	}
};

int main()
{
	Nation nation; //클래스 객체를 생성하고 결과를 출력한다.
	nation.Who();

	return 0;
}

/*
이전 두 관계가 상호 보완적인 요소를 나타낸다면, Nor-A 관계는 논리, 현실적으로 옳지 않은 관계를 말한다.
이떄 "옳지 않다" 라는 것은 한 클래스, 또는 한 파일, 또는 한 계층 구조 안에 전혀 어울리지 않는 클래스나 소스 묶음이 있다는 의미이다.

위 예제 소스를 보면 MaleMonkey 클래스는 landload, Nation 클래스와 아무런 연관성이 없다.
객체지향적 계층 구조를 구성하는데 전혀 어울리지 않는 부분이 있다면 프로그램 전체 설계에 수정 사항이 발생했다는 뜻이기도 한다.

클래스 계층을 그림으로 표현했을 떄 13번 라인의 MaleMonkey 처럼 상속의 주체가 되는 부모 클래스와 어울리지 않는다면, 해당 소스를 다른 부분으로 이동하거나 삭제하는 등의 재검토 과정이 필요하다.
*/