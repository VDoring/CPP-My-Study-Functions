//116
//클래스 상속[2] Is-A 관계
#include <iostream>

using namespace std;

class Landload //Is-A 관계를 나타내는 2가지 형태의 클래스를 선언한다.
{
public:
	void IamLandload() { cout << "건물주입니다" << endl; }
};

class Tenant //(여기도)
{
public:
	void IamTenant() { cout << "세입자입니다" << endl; }
};

class Nation : public Landload, public Tenant //is-A관계를 표현하는 클래스를 선언한다. 33번 라인 is_Landload가 true일떄와 false일떄 결과는 다르다.
{
public:
	void Who()
	{
		cout << "저는 ";

		if (is_landload == true)
			IamLandload();
		else
			IamTenant();
	}

public:
	bool is_landload;
};

int main()
{
	Nation nation; //클래스 객체를 생성하고 is_Landload 변수에 true를 할당한 뒤 결과를 출력한다.
	nation.is_landload = true;
	nation.Who();

	return 0;
}

/*
Has-A 관계가 한쪽의 일방적인 포함이라면 Is-A 관계는 무엇은 무엇이다, 무엇은 한 종류이다라는 의미다.
예제에서 건물주나 세입자는 일반 국민 중 한 사람일 수 있지만 모든 국민이 건물주이거나 세입자일수는 없다.
이런 상속 관계는 객체지향 프로그래밍의 근간이 된다.

클래스를 이용해 프로그래밍을 할 떄 하위 기능을 분리하여 상위 공통 클래스에 상속되도록 코드를 구성하는 것이 바로 객체지향 프로그래밍의 기초이다.
*/