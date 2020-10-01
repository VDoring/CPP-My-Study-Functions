//162
//bitset �ʱ�ȭ ���, ��Ʈ ���� ��ȸ�ϱ�
#include <iostream>
#include <bitset> //bitset�� ����ϱ� ���� include
#include <string>

using namespace std;

int main()
{
	bitset<8> data1(100); //bitset�� �����ϸ� 3���� ������� �ʱ�ȭ�Ѵ�. ������ ���� �Է��ϰų�,
	bitset<8> data2(0x78); //16������ �Է��� �� �ְ�,
	bitset<8> data3(string("11110000")); //���ڿ��� �̿��� �Է��� �� �ִ�.

	cout << "data1 : " << data1 << endl; //�ʱ�ȭ�� bitset�� ����Ѵ�. ����� ���� 01100100, 01111000, 11110000 �̴�.
	cout << "data2 : " << data2 << endl;
	cout << "data3 : " << data3 << endl;

	data1.set(); //set �Լ��� ��� ��Ʈ�� 1�� �����Ѵ�.

	cout << endl << "== data1 ==" << endl; //data1 ��Ʈ���� ���¸� ��ȸ�Ѵ�. ����� ���� 1, 1, 0 �̴�.
	cout << "data1 all: " << data1.all() << '\n'; //all : ��� ��Ʈ�� 1�̸� true�� ����
	cout << "data1 any: " << data1.any() << '\n'; //any : �ϳ��� ��Ʈ�� 1�̾ true�� ����
	cout << "data1 none: " << data1.none() << '\n'; //none : ��� ��Ʈ�� 0�̾�� true�� ����

	data2.reset(); //reset �Լ��� ��� ��Ʈ�� 0���� �����Ѵ�.

	cout << endl << "== data2 ==" << endl; //data2 ��Ʈ���� ���¸� ��ȸ�Ѵ�. ����� 0, 0, 1 �̴�.
	cout << "data2 all: " << data2.all() << '\n';
	cout << "data2 any: " << data2.any() << '\n';
	cout << "data2 none: " << data2.none() << '\n';

	return 0;
}