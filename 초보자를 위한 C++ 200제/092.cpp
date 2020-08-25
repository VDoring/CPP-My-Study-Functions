//092
//구조체 초기화하는 방법 3
#include <iostream>
#include <string>

using namespace std;

//구조체와 string 변수를 보유하는 구조체 선언
struct Info
{
	string country;

	//info 구조체에 포함되는 새로운 구조체.
	//이처럼 구조체 안에 다른 구조체를 선언하여 사용할 수 있다.
	struct Who
	{
		string name;
		string nickname;
	} who;
};

int main()
{
	Info chunk = { "고려", {"장군 척준경", "소드마스터"} }; //구조체 변수를 선언. { } 2개를 이용해 string 변수와 Who 구조체 영역을 분리하여 초기화한다.
	Info anjang = { "고구려", "안장왕 고흥만", "한주 사랑" }; //구조체 변수를 선언하여 문자열 3개를 인자로 사용한다. country, name, nickname 순으로 값이 대입됨.

	cout << chunk.country << ", " << chunk.who.name << ", " << chunk.who.nickname << endl;
	cout << anjang.country << ", " << anjang.who.name << ", " << anjang.who.nickname << endl;

	return 0;
}