//169
//���� ���� for�� ����ϱ�
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> data({ 10,20,30,40 }); //������ ���͸� �����ϰ� 10,20,30,40���� �ʱ�ȭ�Ѵ�.

	cout << "== for, iterator ==" << endl;

	for (auto i = data.begin(); i != data.end(); ++i) //�Ϲ����� for������ �����̳ʸ� ����ϴ� ���̴�. �ռ� ���������� �̹� �ٷ�� �ڵ��̴�.
		cout << *i << ", ";

	cout << endl << "== range based for loop ==" << endl;

	for (const auto i : data) //14�� ���ο� �� �ڵ���� �پ���. ���� ���� for���� begin, end �Լ��� ������ ������ Ÿ���� ���۰� ���� ��� ��ȸ�Ͽ�, �ش� ���� auto i�� �Ҵ��Ѵ�. �ڷ����� �����̳ʴ� :�� �̿��� �����Ѵ�.
		cout << i << ", ";

	cout << endl << "== range based for loop ==" << endl;

	for (auto &i : data) //19�� ���ΰ� ��������� �ּҸ� ������ ���� �����Ѵ�. data �����̳��� ��� ���� 2�� ���Ѵ�.
		cout << i + 2 << ", ";

	cout << endl;

	return 0;
}

/*
���� ���� for���� �����̳ʸ� ���� �� ���ϰ� ����� �� �ִ�.
�ݺ��� iterator�� �����ϴ� begin, end �Լ��� ������ ������ Ÿ���̶�� ���� ���� for������ ����� �� �ִ�.
*/