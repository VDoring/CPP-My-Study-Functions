//084
//2���� �迭 ����ϱ�
#include <iostream>

using namespace std;

int main()
{
	int data1[2][2] = { 1,2,3 }; //1,2,3,0���� �ʱ�ȭ
	int data2[2][3] = { {1,} }; //1,0,0,0,0,0���� �ʱ�ȭ

	cout << "data1[0][0] = " << data1[0][0] << endl;
	cout << "data1[0][1] = " << data1[0][1] << endl;
	cout << "data1[1][0] = " << data1[1][0] << endl;
	cout << "data1[1][1] = " << data1[1][1] << endl;

	cout << endl;
	cout << "data2[0][0] = " << data2[0][0] << endl;
	cout << "data2[0][1] = " << data2[0][1] + 1 << endl;
	cout << "data2[0][2] = " << data2[0][2] + 2 << endl;
	cout << "data2[1][0] = " << data2[1][0] + 3 << endl;
	cout << "data2[1][1] = " << data2[1][1] + 4 << endl;
	cout << "data2[1][2] = " << data2[1][2] + 5 << endl;

	return 0;
}

/*
2���� �迭�� ����ȣ 2���� ���ļ� ����Ѵ�.
[2][4]�� 2�� 4��. �ึ�� 4���� �����Ͱ� ����.
*/