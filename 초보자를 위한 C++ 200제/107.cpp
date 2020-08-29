//107
//클래스 default 생성자(default)
#include <iostream>
#include <string>

using namespace std;

class Class1 //멤버 변수 3개를 보유하는 클래스를 선언한다.
{
public:
	Class1() = default; //생성자 옆에 default라는 키워드는 클래스 내부 변수를 모두 초기화한다는 의미이다.
	                    //그전에는 기본 생성자를 따로 구현하여 변수의 값을 일일이 지정해야 했지만, 특별한 값으로 초기화할 필요가 없을 때는 default 키워드를 이용하는 것이 편리하다.

public:
	int number;
	double prime;
	string word;
};

class Class2
{
public:
	Class2() { }; //Class1의 생성자와 달리 default 키워드를 사용하지 않았다.

public:
	int number;
	double prime;
	string word;
};

int main()
{
	Class1 *class1 = new Class1(); //Class1의 객체를 생성한다. new를 이용하면 메모리 힙 영역에 할당된다.
	cout << "Class1 : " << class1->number << ", " << class1->prime << ", " << class1->word << endl; //Class1의 변수 내용을 출력한다.

	Class2 *class2 = new Class2(); //Class2의 객체를 생성한다.
	cout << "Class2 : " << class2->number << ", " << class2->prime << ", " << class2->word << endl; //Class2의 변수 내용을 출력한다.

	return 0;
}

/*
생성자에 default 키워드를 사용하면 Class1의 출력 결과처럼 내부 변수가 초기화된다.
*/