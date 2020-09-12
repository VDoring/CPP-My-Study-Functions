//142
//auto 사용하기
#include <iostream>
#include <string>

using namespace std;

//함수 각각은 int, double, string을 반환한다.
int GetInt() { return 1; }
double GetDouble() { return 1.11; }
string GetString() { return "3"; }

//auto를 반환할떄 리턴값의 타입을 지정할 수 있다. 정수형 인자를 2개 받아 그 합을 정수형으로 반환하는 함수이다.
auto add(int x, int y) -> int
{
	return x + y;
}

int main()
{
	//auto 키워드를 이용한 변수에 각기 다른 값들을 저장한다. 이 변수들은 모두 auto형으로 컴파일 단계에서 자료형이 결정된다.
	auto data1 = GetInt();
	auto data2 = GetDouble();
	auto data3 = GetString();
	auto data4 = add(5.1, 10.2);

	//typeid의 name함수는 자료형 이름을 반환한다.
	cout << "Data1 : " << data1 << ", " << typeid(data1).name() << endl;
	cout << "Data2 : " << data2 << ", " << typeid(data2).name() << endl;
	cout << "Data3 : " << data3 << ", " << typeid(data3).name() << endl;
	cout << "Data4 : " << data4 << ", " << typeid(data4).name() << endl;

	return 0;
}

/*
비주얼 스튜디오 2012부터 적용된 C++11의 표준 중 하나로 컴파일러가 자동으로 타입을 유추하는 키워드 auto이다.

예를 들어 어떤 곳에서는 string을, 어떤 곳에서는 int를 반환할때 string과 int의 처리 함수를 따로 구현하는 대신 auto 키워드를 사용하여 적용할 수 있다.
재사용성 증가.

하지만, 남발시 가독성을 떨어트려 해당 자료형이 무엇인지 프로그래머 본인 조차 유추하기 힘들어지는 떄가 있으니 적당히 사용하는 것이 좋다.
*/