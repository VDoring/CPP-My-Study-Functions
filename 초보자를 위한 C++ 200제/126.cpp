//126
//함수 템플릿 사용하기(template)
#include <iostream>

using namespace std;

template <typename T> //template를 선언하면 <typename ?>사이의 물음표를 채워야 한다. 일종의 이름 짓기인데 T는 변수처럼 원하는 이름으로 설정할 수 있다. 컴파일러는 T라는 자료형이 무엇인지 유추하게 된다. 또한 함수 템플릿에서도 디폴트 매개변수를 사용할 수 있다.
T Plus(T x, T y, T z = 1) //template T가 Plus 함수의 리턴값과 인자 자료형이 된다.
{
	return x + y + z;
}

int main()
{
	int number1 = Plus(1, 2); //int 변수에 Plus 함수의 리턴값을 저장한다. 컴파일러가 유추할 자료형은 int이며 인자는 1,2,1과 1,2,3으로 결과는 4와 6이다.
	int number2 = Plus(1, 2, 3);
	double number3 = Plus(1.1, 2.2); //double변수에 Plus 함수의 리턴값을 저장한다. 컴파일러가 유추할 자료형은 double이며 인자는 1.1, 2.2, 1.0과 1.1, 2.2, 3.3으로 결과는 4.3과 6.6이다.
	double number4 = Plus(1.1,2.2,3.3);

	cout << "결과값 : " << number1 << ", " << number2 << ", " << number3 << ", " << number4 << endl;

	return 0;
}

/*
template란 키워드가 있으면 컴파일러는 소스 빌드 단계에서 자료형을 유추한다.
프로그래머는 template를 이용해 하나의 함수에 다양한 자료형을 넘길 수 있다.
*/