//163
//bitset �����ϱ�, ���ڿ� ��ȯ, ���� ��ȯ
#include <iostream>
#include <bitset> //bitset�� ����ϱ� ���� include
#include <string>

using namespace std;

int main()
{
	bitset<8> data1(1); //bitset�� 1�� 16���� 0x01�� �ʱ�ȭ�Ѵ�. �ʱ� ���� 00000001 �̴�.
	bitset<8> data2(0x01);

	cout << "data1 : " << data1 << endl; //�� bitset�� ����Ѵ�. ��� ���� 00000001 �� �Ȱ���.
	cout << "data2 : " << data2 << endl;

	data1.set(0, false); //set �Լ��� �̿��� �ϳ��� ��Ʈ�� ������ �� �ִ�.
	data1.set(2, 1); //ù ��° ���ڴ� ������ ��Ʈ�� �ε���, �� ���� ���ڴ� ������ ���̴�. �� ���� ���ڰ� 1�̸� true, 0�̸� false�̴�.

	cout << endl << "== data1 ==" << endl; //bitset data1�� ����Ѵ�. ��� ���� 00000100 �̴�.
	cout << "data1 : " << data1 << endl;

	data2[4] = false; //[]�� �̿��� �ϳ��� ��Ʈ�� ������ �� �ִ�.
	data2.flip(5); //flip�� �ش� ��ġ ��Ʈ�� �����Ѵ�. 0�̶�� 1��, 1�̶�� 0���� �����Ѵ�.

	cout << endl << "== data2 ==" << endl; //bitset data2�� ����Ѵ�. ��� ���� 00100001 �̴�.
	cout << "data2 : " << data2 << endl;

	string data1_str = data1.to_string(); //bitset�� ���ڿ��� ������ ��ȯ�ϴµ�, to_string�� to_ulong �Լ��� ����Ѵ�.
	int data2_int = data2.to_ulong();

	cout << endl << "== ��ȯ ==" << endl;
	cout << "data1 : " << data1_str << endl;
	cout << "data2 : " << data2_int << endl;

	return 0;
}