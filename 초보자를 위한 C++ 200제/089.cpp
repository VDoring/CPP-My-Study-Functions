//089
//구조체를 함수 인자로 사용하기
#include <iostream>
#include <string>

using namespace std;

//struct 키워드를 사용해 구조체를 선언한다. 구조체 변수 jungso도 선언한다.
struct Princess
{
	string name;
	string father;
	string birthday;
} jungso;

//구조체 인자를 포인터로 받는 함수이다.
//구조체는 일반 변수처럼 다뤄지기 때문에 주소 번지 지정자 & 를 사용하여 넘기고 받는 함수는 &를 이용한다.
//포인터이기 때문에 . 대신 ->을 사용한다.
void Print(Princess *who)
{
	cout << "jungso.name = " << who->name << endl;
	cout << "jungso.father = " << who->father << endl;
	cout << "jungso.bitrhday = " << who->birthday << endl;
}

int main()
{
	//미리 선언된 변수 jungso에 값을 설정한다.
	jungso.name = "정소공주";
	jungso.father = "조선 태종";
	jungso.birthday = "1412년";

	//jungso의 모든 데이터를 출력.
	Print(&jungso);

	return 0;
}