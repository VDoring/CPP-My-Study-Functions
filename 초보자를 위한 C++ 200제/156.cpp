//156
//list ����, ����, �ߺ� �� �����ϱ�(sort, unique, merge)
#include <iostream>
#include <list> //list�� ����ϱ� ���� include

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

int main()
{
	list<int> data1({ 1,2,3,2 }); //list�� ������ �� �� �������� 3�� �ٽ� �߰��Ѵ�. �̷����ؼ� data1�� 1,2,3,2,3�� �����Ѵ�.
	data1.push_back(3);
	data1.sort(); //list�� ���� ������ �� �ִµ�, �̸� ���� �Լ��� sort�̴�.

	Print(data1); //data1�� ����Ѵ�. ����� 1,2,2,3,3 �̴�.

	data1.unique(); //data1�� �ߺ� �����͸� �����Ѵ�. unique �Լ��� ����ϸ� �� ó�� �����͸� ����� ��� �����ȴ�.

	Print(data1); //data1�� ����Ѵ�. ����� 1,2,3 �̴�.

	list<int> data2 = { 4,5,6 }; //���ο� list�� �����Ѵ�.
	data2.merge(data1); //data2�� data1�� ��ġ�µ� ���Ǵ� �Լ��� merge�̴�.

	Print(data2); //data2�� ����Ѵ�. ����� 1,2,3,4,5,6 �̴�.

	return 0;
}

/*
list�� vector�� �⺻ ������ �ٸ��� ������ at(i), operator[]�� ���� ���� �������� �������� �ʴ´�.
list�� ���� ��ũ�� ����Ʈ�� �����Ǿ����� ����, ������ �����ٴ� ������ �ִ�.
�ݸ� Ư�� ���ҿ� �������� ���ϰ� �����̳� ��ҿ� �����Ϸ��� �ݵ�� �ݺ��ڸ� �̿��ؾ� �Ѵ�.
�׷��� �����ϰ� �������� �ʴ� �����ʹ� list�� �����ϴ� ���� ����.
*/