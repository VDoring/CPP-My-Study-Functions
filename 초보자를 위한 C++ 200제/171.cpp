//171
//���ǿ� �´� ��Ұ� �ִ��� �˻��ϱ�(any_of)
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool EvenOdd(int arg) //���ڷ� ���� ������ ¦����� true�� �����ϴ� �Լ��̴�.
{
	return arg % 2 == 0 ? true : false;
}

int main()
{
	vector<int> data = { 8,27,35,49 }; //������ ���͸� �����ϸ� 8, 27, 35, 49�� �ʱ�ȭ�Ѵ�.

	if (any_of(data.begin(), data.end(), EvenOdd)) //data ���͸� ���ڷ� ����ϸ� ������ �Լ� EvenOdd�� ��ü�մϴ�. ���� data�� ¦���� �ϳ��� �����Ѵٸ� 20�� ������ ����ȴ�.
		cout << "data : ¦���� �����մϴ�" << endl;

	if (any_of(data.begin(), data.end(), [](int i) {return i < 10; })) //data ���Ϳ� ���ٸ� ����Ѵ�. data�� 10���� ���� ���� �ϳ��� �ִٸ� 23�� ������ ����ȴ�.
		cout << "data : 10���� ���� ���� �ֽ��ϴ�" << endl;

	return 0;
}

/*
any_of �Լ��� all_of �Լ��� ��� ����� ��������� �ǹ̴� �ٸ���.
any_of �Լ��� �����̳� ��� �� �ϳ��� ���ǿ� �´ٸ� true�� �����Ѵ�.
*/