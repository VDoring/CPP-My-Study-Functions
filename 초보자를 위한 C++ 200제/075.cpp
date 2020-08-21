//075
//Call by Reference 이해하기
#include <iostream>
#include <string>

using namespace std;

//함수 인자로 int 자료형의 주소를 가리키는 포인터를 받는다. 그리고 10을 증가한다.
void Func1(int &arg)
{
	cout << "변경 전 : " << arg << endl;
	arg += 10;
	cout << "변경 후 : " << arg << endl;
}

//함수 인자로 string 자료형의 주소를 가리키는 포인터를 받는다. 그리고 문자열 뒤에 내용을 추가한다.
void Func2(string &info)
{
	info += "981년";
}

//함수 Func1을 이용해 year변수의 값을 10 증가시킨다. 바로 앞 예제와는 다르게 Func1 함수는 인자를 복사해 사용하지 않고 인자의 주소를 가리키는 포인터를 사용하기 때문에 year 변수값은 증가한다.
//포인터가 가리키는 곳, 즉 주소의 값을 직접 바꾸는 것이다.
int main()
{
	int year = 10;

	Func1(year);

	cout << "Func1 함수 종료 후 : " << year << endl;

	string king_info = "고려 성종 즉위년 : ";

	Func2(king_info); //위와 비교해 자료형만 다를뿐 내용은 똑같다.

	cout << king_info << endl;

	return 0;
}