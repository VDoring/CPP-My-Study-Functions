//119
//Friend 함수 사용하기
#include <iostream>
#include <string>

using namespace std;

class Onda1 {
public:
	friend void GetYear(Onda1 onda1) //friend 함수 GetYear를 선언한다. friend 함수는 외부에서 접근할 수 있어 정보은닉(캡슐화)에 위배된다.
	{
		cout << "이단성 전투 연도 : " << onda1.year_ << endl;
	}

	void SetYear(int year) { year_ = year; } //private 멤버 변수를 초기화하는 함수이다.

private:
	int year_;
};

int main()
{
	Onda1 onda1; //Onda1 클래스 객체를 만들어 멤버 변수를 590으로 초기화한다.
	onda1.SetYear(590);

	GetYear(onda1); //friend 함수로 선언되었기 때문에 main 클래스에서 접근해 결과를 출력할 수 있다. 만약 friend 키워드를 지우면 에러가 발생한다.

	return 0;
}

/*
외부의 모든 접근을 허용하는 friend 키워드는 매우 제한적으로 사용하거나 아예 사용하지 않는 것이 좋다.
전역 변수처럼 좋지 않은 기능이기 때문에 사용 방법은 알지만 사용하지 않는 것을 권장한다.

객체지향 언어의 특성 중 하나인 정보은닉을 깨트리는 friend 키워드는 앞선 예제처럼 클래스에 적용할 수 있고, 하나의 함수에만 적용할 수도 있다.
*/