//143
//decitype 사용하기
#include <iostream>

using namespace std;

int main()
{
	auto data1 = 1; //auto 변수 data1에는 1이 대입되기 떄문에 자료형은 int다.
	decltype(data1) data2 = 2; //auto 변수 data1의 자료형은 decitype이 int로 유추하여 data2의 자료형을 설정한다.

	auto data3 = 3.4; //auto 변수 data3에는 3.4가 대입되기 때문에 자료형은 double이다.
	decltype(data2 + data3) data4 = 3; //auto 변수 data2의 자료형은 decitype이 int로 유추하고 data3의 자료형은 double로 유추한다. int보다 double 자료형이 범위가 더 크므로 data4는 double 자료형이 된다.

	cout << "Data1 : " << data1 << ", " << typeid(data1).name() << endl;
	cout << "Data2 : " << data2 << ", " << typeid(data2).name() << endl;
	cout << "Data3 : " << data3 << ", " << typeid(data3).name() << endl;
	cout << "Data4 : " << data4 << ", " << typeid(data4).name() << endl;

	return 0;
}

/*
C++에서 타입 유추하는 방법에는 두 가지가 있다.
1. auto
2. decitype

decitype는 인자로 받은 자료형에 맞춰 다른 변수의 자료형을 지정한다.
*/

/*
auto, decitype같은 타입추론과 일일이 자료형을 정해주는 것에는 속도와 코드 안전성 차이가 있다.
C++ 14에서는 타입추론의 적용 범위가 넓어져 전역 변수, 클래스 멤버 변수에도 auto, decitype를 사용할 수 있게 되었다.

주로 리눅스에서 사용하는 GCC 컴파일러에는 decitype와 비슷한 typeof가 존재했지만, typeof는 변수 선언에만 사용할 수 있는 등 사용 방법에 조금 차이가 있다.
*/