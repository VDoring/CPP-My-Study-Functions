//124
//type_tratis ����ϱ�[2] (empty, array, same)
#include <iostream>
#include <map>

using namespace std;

struct TmpStruct { //������ ������ �� �� �����ϴ� ����ü�� �����Ѵ�.
	int x = 0;
};

class TmpClass //���� ���� ��, ���δ� ��� �ִ� Ŭ������ �����Ѵ�.
{

};

int main()
{
	cout << boolalpha;

	cout << "== is_empty ==" << endl; //���� ��Ұ� ����ִ��� Ȯ���Ѵ�.
	cout << is_empty<TmpStruct>::value << endl;
	cout << is_empty<TmpClass>::value << endl;

	cout << "== is_array ==" << endl; //�迭 �������� Ȯ���Ѵ�.
	cout << is_array<TmpStruct>::value << endl;
	cout << is_array<map<int, double>>::value << endl;
	cout << is_array<int[3]>::value << endl;

	cout << "== is_same ==" << endl; //�� ������ ���� ���ٸ� true, �ٸ��ٸ� false�� ��ȯ�Ѵ�.
	cout << is_same<TmpStruct, TmpClass>::value << endl;
	cout << is_same<int, signed int>::value << endl;
	cout << is_same<int, bool>::value << endl;
	cout << is_same<char, unsigned char>::value << endl;

	return 0;
}