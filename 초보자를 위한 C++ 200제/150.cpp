//150
//tuple ����ϱ�(�񱳿���)
#include "stdafx.h" //(���� �߰��ؾ��մϴ�)
#include <iostream>
#include <tuple>
#include <string>

using namespace std;

int main()
{
	//���� ������ Ʃ�� 2���� �����Ѵ�.
	tuple<int, string> data1(1, "def");
	tuple<int, string> data2(1, "abc");

	if (data1 > data2) //�� Ʃ�� ũ�⸦ ���ϴµ� ù ���� ��Ҵ� ���� 1�� �Ȱ���. ������ �� ���� ��Ҵ� ���ĺ� ���� �� def�� �� ũ�� ������ data1�� �� ũ�ٰ� �� �� �ִ�.
		cout << "data1 > data2" << endl;
	else
		cout << "data1 < data2" << endl;

	tuple<double, string> data3(1.0, "def");
	tuple<double, string, int> data4(2.0, "abc", 3);

	//if (data3 == data4)
	//	cout << "data1 > data2" << endl;
	//else
	//	cout << "data1 < data2" << endl;

	return 0;
}

/*
Ʃ���� ���� �� �⺻ �����ڸ� �̿��� �� �ִ�.

Ʃ���� ���� ���³��� ���� �� ������ ���� ���°� �ٸ� Ʃ���� ���Ϸ� �ϸ� ������ �߻��Ѵ�.
(Ʃ�� ũ�Ⱑ �ٸ��� ������ ���� �� ���ٴ� ���� �޼����� ���)

data3�� data4�� ũ�Ⱑ �ٸ��� ������ �ּ��� �����ϸ� ���� �޼����� ��µȴ�.
*/

/*
���α׷� ����� data1 > data2 �̴�.
*/