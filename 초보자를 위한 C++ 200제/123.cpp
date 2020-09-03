//123
//type_tratis 사용하기[1] (정수, enum, signed)
#include <iostream>

using namespace std;

enum TmpEnum { }; //enum 선언
enum class TmpEnumClass : int { }; //enum class 선언

int main()
{
	cout << boolalpha; //콘솔에 출력될 결과를 boolean으로 설정한다.

	cout << "== is_integral ==" << endl; //정수 계열의 형식인지 검사한다.
	cout << is_integral<TmpEnum>::value << endl; //정수 계열 아님. false
	cout << is_integral<TmpEnumClass>::value << endl; //정수 계열 아님. false
	cout << is_integral<signed int>::value << endl;
	cout << is_integral<unsigned int>::value << endl;
	cout << is_integral<double>::value << endl;
	cout << is_integral<bool>::value << endl; //정수 1 또는 0으로도 표현한다. true

	cout << "== is_enum ==" << endl; //enum 계열의 형식인지 검사한다.
	cout << is_enum<TmpEnum>::value << endl; 
	cout << is_enum<TmpEnumClass>::value << endl;
	cout << is_enum<int>::value << endl;

	cout << "== is_signed ==" << endl; //signed 정수 계열의 형식인지 검사한다.
	cout << is_signed<TmpEnum>::value << endl;
	cout << is_signed<signed int>::value << endl;
	cout << is_signed<unsigned int>::value << endl;

	cout << "== is_unsigned ==" << endl; //unsigned 정수 계열의 형식인지 검사한다.
	cout << is_unsigned<TmpEnumClass>::value << endl;
	cout << is_unsigned<int>::value << endl; //그냥 int는 묵시적으로 signed int 형식이기 떄문에, false
	cout << is_unsigned<unsigned int>::value << endl;

	return 0;
}

/*
타입 트레이츠는 다음 장에서 배울 템플릿에서 유용하게 사용할 수 있다.
특별한 타입을 필요로 하거나 특정 타입을 꼭 상속받아야 하는 등 특정 상황이 발생하면 타입 트레이츠를 이용할 수 있다.
*/