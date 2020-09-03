//124
//type_tratis 사용하기[2] (empty, array, same)
#include <iostream>
#include <map>

using namespace std;

struct TmpStruct { //정수형 변수를 한 개 보유하는 구조체를 선언한다.
	int x = 0;
};

class TmpClass //선언만 했을 뿐, 내부는 비어 있는 클래스를 선언한다.
{

};

int main()
{
	cout << boolalpha;

	cout << "== is_empty ==" << endl; //내부 요소가 비어있는지 확인한다.
	cout << is_empty<TmpStruct>::value << endl;
	cout << is_empty<TmpClass>::value << endl;

	cout << "== is_array ==" << endl; //배열 형식인지 확인한다.
	cout << is_array<TmpStruct>::value << endl;
	cout << is_array<map<int, double>>::value << endl;
	cout << is_array<int[3]>::value << endl;

	cout << "== is_same ==" << endl; //두 형식을 비교해 같다면 true, 다르다면 false를 반환한다.
	cout << is_same<TmpStruct, TmpClass>::value << endl;
	cout << is_same<int, signed int>::value << endl;
	cout << is_same<int, bool>::value << endl;
	cout << is_same<char, unsigned char>::value << endl;

	return 0;
}