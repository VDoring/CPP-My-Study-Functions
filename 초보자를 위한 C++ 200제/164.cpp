//164
//bitset ��Ʈ �����ϱ�
#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	//4��Ʈ ũ���� bitset�� �����ϸ� �ʱⰪ�� 0110, 1001�� �����Ѵ�.
	bitset<4> data1(6); //0110
	bitset<4> data2(0x09); //1001

	auto result1 = data1 | data2; //OR. �� ��Ʈ�� 1�̾ ����� 1�� �ȴ�.
	cout << "data1 | data2 = " << result1 << endl; //1111
	
	auto result2 = data1 & data2;//AND. ���� ��Ʈ�� 1�̾�� ����� 1�� �ȴ�.
	cout << "data1 & data2 = " << result2 << endl; //0000
	
	auto result3 = data1 ^ data2; //XOR. ���� ��Ʈ�� ���� 0�� 1�̾�� ����� 1�� �ȴ�.
	cout << "data1 ^ data2 = " << result3 << endl; //1111

	auto result4 = data1 << 1; //��ü ��Ʈ�� �������� 1��ŭ �̵�.
	cout << "data1 << 1 = " << result4 << endl; //1100

	auto result5 = data1 >> 1; //��ü ��Ʈ�� ���������� 1��ŭ �̵�.
	cout << "data1 >> 1 = " << result5 << endl; //0011

	auto result6 = ~data1; //data1 ��Ʈ ��ü�� �����Ѵ�.
	cout << "~data1 = " << result6 << endl; //1001
	
	return 0;
}