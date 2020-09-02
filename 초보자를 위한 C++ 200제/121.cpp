//121
//함수 오버라이딩 이해하기
#include <iostream>

using namespace std;

class Base //예제를 위한 부모 클래스를 선언하고 출력 함수 Display를 정의한다.
{
public:
	void Display() { cout << "고려 16대왕 예종" << endl; }
};

class Derived : Base //자식 클래스를 선언하고 부모 클래스를 상속 받는다. 그리고 부모 클래스의 Display 함수를 재정의한다.
{
public:
	void Display() { cout << "고려 17대왕 인종" << endl; }
};

int main()
{
	Derived child; //자식 클래스의 객체를 생성하고 Display 함수를 호출한다.
	child.Display();

	return 0;
}

/*
오버로딩은 인자, 리턴값 등을 구분해 같은 이름의 함수를 사용하는 것이다.
오버라이딩은 이와는 다르게 상속 관계에서 발생하는 것으로 부모 클래스 함수를 자식 클래스에서 다시 정리한다는 의미이다.
오버라이딩이 이루어지면 부모 클래스에서 정의된 내용은 무시한다.
*/