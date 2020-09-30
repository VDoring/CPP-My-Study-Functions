//159
//array ����, ����, �����ϱ�(fill, at, copy)
#include <iostream>
#include <array> //array�� ����ϱ� ���� include

using namespace std;

void Print(const array<int, 3> &data) //array�� ���ڷ� �޾� ���� ��Ҹ� ��� ����ϴ� �Լ��̴�.
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
	array<int, 3> data1{ 10,2,5 }; //array�� �����Ѵ�. array�� vector�� ��� ����� ��������� ũ�Ⱑ �����Ǿ� �ִٴ� ���̰� �ִ�. array�� �����ϰ� <> ���̿� �ڷ����� array�� ũ�⸦ �Է��Ѵ�.
	array<int, 3> data2;
	data2.fill(0); //data2�� fill �Լ��� ȣ���ϰ� ���ڷ� 0�� �����Ѵ�. fill�� array ��ü�� Ư�� ������ ������ �� ����Ѵ�.
	data2.at(1) = 200; //array�� ���� �������� ����ϱ� ������ at �Լ��� ȣ���Ͽ� �� ���� ���� ���� 200���� ���� �� �� �ִ�.

	Print(data2); //data2�� ����Ѵ�. ����� 0,200,0 �̴�.

	copy(data1.begin(), data1.end(), data2.begin()); //copy �Լ��� �̿��� array�� �����Ѵ�. data1�� ù ��° ��Һ��� ������ ��Ҹ� data2�� ù ���� ��ġ���� ���� �� �����Ѵ�. �� data2�� ��Ҵ� data1�� ��ҷ� ����ȴ�.

	Print(data1); //data1�� ����Ѵ�. ����� 10,2,5 �̴�.
	Print(data2); //data2�� ����Ѵ�. ����� 10,2,5 �̴�.

	return 0;
}