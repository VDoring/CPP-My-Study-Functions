//160
//map ����, �����ϱ�(insert, at)
#include <iostream>
#include <map> //map�� ����ϱ� ���� include
#include <string>

using namespace std;

void Print(const map<int, string> &data) //map�� ���ڷ� �޾� ���� ��Ҹ� ��� ����ϴ� �Լ��̴�. 16�� ���ο��� iter�� first�� second��Ҹ� �������µ�, map�� key�� value�� �̷�����. �� first�� key, second�� value�� ����Ų��.
{
	cout << "== Print ==" << endl;

	for (auto iter = data.begin();
		iter != data.end();
		++iter)
		cout << iter->first << " : " << iter->second << ", ";

	cout << endl;
}

int main()
{
	map<int, string> data; //map�� �����Ѵ�. key�� int, value�� string�̴�. �������ΰ� �״������ο����� map ���¿� ���� key�� value�� { } �ȿ� �˸°� �����Ͽ� �����͸� �����Ѵ�.
	data.insert({ 0, "ù ����" });
	data.insert({ 1, "�� ����" });

	Print(data); //data�� ��Ҹ� ����Ѵ�. ����� 0 : ù����, 1 : �ι��� �̴�.

	auto ret = data.insert({ 1, "������" }); //map���� key�� �ߺ��� �� ����. insert�� pair�� �����ϴµ� pair�� ���� �ٸ� �� Ÿ���� ���� �����ϴ� Ŭ�����̴�. insert�� ���������� ����Ǹ� ���ϵ� pair�� ������ ��Ҹ� ����Ű����, �����ϸ� �̹� �����ϴ� key���� ��ġ�� ��ȯ�Ѵ�. Ű 1�� �̹� �����ϱ� ������ �� ��쿡 insert�� �����Ͽ� 34�� ������ ����ȴ�.

	if (ret.second == true)
		cout << "������ �߰� ����" << endl;
	else
		cout << "������ �߰� ����" << endl;

	data.at(0) = "����1"; //map�� ���� �������� ����ϱ� ������ at �Լ��� ȣ���Ͽ� value�� ������ �� �ִ�. key�� ������ �� ����.

	Print(data); //data�� ��Ҹ� ����Ѵ�. ����� 0 : ����1, 1 : �ι��� �̴�.

	return 0;
}

/*
map�� Ű�� ���� �� ������ �̿��Ѵ�.
������ ����, ����, ������ ��� Ű�� �̿��� �̷������ ���� �ߺ��� �� ������ Ű�� �ߺ��� �� ����. map�� �ߺ����� �ʴ� ���밪�� �̿��� �����͸� �ٷ� �� �����ϰ� ����� �� �ִ�.
*/