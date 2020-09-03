//123
//type_tratis ����ϱ�[1] (����, enum, signed)
#include <iostream>

using namespace std;

enum TmpEnum { }; //enum ����
enum class TmpEnumClass : int { }; //enum class ����

int main()
{
	cout << boolalpha; //�ֿܼ� ��µ� ����� boolean���� �����Ѵ�.

	cout << "== is_integral ==" << endl; //���� �迭�� �������� �˻��Ѵ�.
	cout << is_integral<TmpEnum>::value << endl; //���� �迭 �ƴ�. false
	cout << is_integral<TmpEnumClass>::value << endl; //���� �迭 �ƴ�. false
	cout << is_integral<signed int>::value << endl;
	cout << is_integral<unsigned int>::value << endl;
	cout << is_integral<double>::value << endl;
	cout << is_integral<bool>::value << endl; //���� 1 �Ǵ� 0���ε� ǥ���Ѵ�. true

	cout << "== is_enum ==" << endl; //enum �迭�� �������� �˻��Ѵ�.
	cout << is_enum<TmpEnum>::value << endl; 
	cout << is_enum<TmpEnumClass>::value << endl;
	cout << is_enum<int>::value << endl;

	cout << "== is_signed ==" << endl; //signed ���� �迭�� �������� �˻��Ѵ�.
	cout << is_signed<TmpEnum>::value << endl;
	cout << is_signed<signed int>::value << endl;
	cout << is_signed<unsigned int>::value << endl;

	cout << "== is_unsigned ==" << endl; //unsigned ���� �迭�� �������� �˻��Ѵ�.
	cout << is_unsigned<TmpEnumClass>::value << endl;
	cout << is_unsigned<int>::value << endl; //�׳� int�� ���������� signed int �����̱� ������, false
	cout << is_unsigned<unsigned int>::value << endl;

	return 0;
}

/*
Ÿ�� Ʈ�������� ���� �忡�� ��� ���ø����� �����ϰ� ����� �� �ִ�.
Ư���� Ÿ���� �ʿ�� �ϰų� Ư�� Ÿ���� �� ��ӹ޾ƾ� �ϴ� �� Ư�� ��Ȳ�� �߻��ϸ� Ÿ�� Ʈ�������� �̿��� �� �ִ�.
*/