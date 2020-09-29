//157
//list Ư�� ��� ����, ���� ���ġ(remove, reverse)
#include <iostream>
#include <list>

using namespace std;

void Print(const list<int> &data) //list�� ���ڷ� �޾� ���� ��Ҹ� ��� ����ϴ� �Լ��̴�.
{
	cout << "== Print ==" << endl;

	for (auto iter = data.begin();
		iter != data.end();
		++iter)
		cout << *iter << ", ";

	cout << endl;
}

bool IsOdd(int arg) //������ ���ڷ� �޾� Ȧ���� true 1, ¦���� false 0�� �����ϴ� �Լ��̴�.
{
	return arg % 2 == 0 ? 0 : 1;
}

int main()
{
	list<int> data1({1, 2, 4, 2, 7, 10, 13, 14}); //list�� �����Ѵ�.

	data1.remove(2); //remove �Լ��� 2�� �����ϸ� data1�� ��� �� 2�� ��� �����ȴ�.
	data1.remove_if(IsOdd); //list ��Ҹ� ������ �� ������ �� �� �ִ�. remove_if �Լ��� Ȧ��, ¦���� ���� true, false�� �����ϴ� �Լ��� ���ڷ� ����Ѵ�. �� �Լ��� ���� data1�� Ȧ���� ��� �����ȴ�.

	Print(data1); //data1�� ����Ѵ�. ����� 4,10,14 �̴�.

	data1.reverse(); //data1�� �������� ���ġ�Ѵ�.

	Print(data1); //data1�� ����Ѵ�. ����� 14,10,4 �̴�.

	return 0;
}