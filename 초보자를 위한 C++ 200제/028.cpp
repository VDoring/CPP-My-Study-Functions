//028
//��Ʈ ������ �����ϱ�(&, |, ^, ~, <<, >>)

#include <iostream>
#include <bitset>
//C++������ C���ó�� char�� int�� ��Ʈ ������ �ϴ� �ͺ��� bitset�̶�� �����̳ʸ� ����ϴ� ���� �����ϴ�.
//bitset�� 162, 163, 164�忡�� �ڼ��� �ٷ��.

using namespace std;

int main()
{
	bitset<8> bit1;
	//bitset ������ �����ϸ� ũ��� 8�� �����Ѵ�.
	bit1.reset(); //0000 0000
	//bitset�� 0���� �ʱ�ȭ�Ѵ�.
	bit1 = 127; //0111 1111
	//bitset ������ 127�� �Ҵ��Ѵ�.

	bitset<8> bit2;
	bit2.reset();
	bit2 = 0x20; //32. 0010 0000

	bitset<8> bit3 = bit1 & bit2; //0111 1111 & 0010 0000 -> 0010 0000
	bitset<8> bit4 = bit1 | bit2; //0111 1111 | 0010 0000 -> 0111 1111
	bitset<8> bit5 = bit1 ^ bit2; //0111 1111 ^ 0010 0000 -> 0101 1111
	bitset<8> bit6 = ~bit1;       //0111 1111             -> 1000 0000
	bitset<8> bit7 = bit2 << 1;   //0010 0000             -> 0100 0000
	bitset<8> bit8 = bit2 >> 1;   //0010 0000             -> 0001 0000

	cout << "bit1 & bit2 : " << bit3 << ", " << bit3.to_ulong() << endl;
	cout << "bit1 | bit2 : " << bit4 << ", " << bit4.to_ulong() << endl;
	cout << "bit1 ^ bit2 : " << bit5 << ", " << bit5.to_ulong() << endl;
	cout << "~bit1: " << bit6 << ", " << bit6.to_ulong() << endl;
	cout << "bit2 << 1: " << bit7 << ", " << bit7.to_ulong() << endl;
	cout << "bit2 >> 1: " << bit8 << ", " << bit8.to_ulong() << endl;

	return 0;
}

/*
8��Ʈ�� 1����Ʈ�̸� 2�� 8���� 256������ ǥ���� �� �ִ�.
C++ �ڷ��� �� char�� 8��Ʈ 1����Ʈ �����̱� ������ 8��Ʈ ������ ������ �����ߴ�.

��Ʈ ���꿡�� 6���� ����� �ִ�.
A & B : A�� B�� and ����
A | B : A�� B�� or ����
A ^ B : A�� B�� xor ����. ���� ���� �ٸ� ��(0�� 1�϶�) 1�� �ٲ��.
~A : A�� ��Ʈ�� ����
A >> n : A�� ��� ��Ʈ�� n��ŭ ���������� ����Ʈ
A << n : A�� ��� ��Ʈ�� n��ŭ �������� ����Ʈ
*/