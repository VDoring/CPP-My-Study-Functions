//173
//���ĵǾ� �ִ��� Ȯ���ϱ�(is_sorted)
#include <iostream>
#include <algorithm>
#include <list>
#include <string>

using namespace std;

int main()
{
	list<int> data1 = { 5,3,1,7,9 }; //������ ���� ����
	list<string> data2 = { "ef", "ab", "cd", "ij", "gh" }; //���ڿ��� ���� ����

	cout << boolalpha; //�Լ� ���� ����� true, false�� ǥ���ϵ��� �����Ѵ�.
	cout << "data1 sort : " << is_sorted(data1.begin(), data1.end()) << endl; //�Լ� is_sorted�� ȣ���Ͽ� ���ڷδ� data1�� ���� ��ġ�� ������ ��ġ�� ����Ѵ�. ���� data1�� ������������ ���ĵ� ���¶�� true, �ƴ϶�� false�� ���ϵȴ�. ����� false�̴�.
	cout << "data2 sort : " << is_sorted(data2.begin(), data2.end()) << endl; //�Լ� is_sorted�� ȣ���Ͽ� ���ڷδ� data2�� ���� ��ġ�� ������ ��ġ�� ����Ѵ�. �����̳� ��ü�� �ƴ϶� �Ϻ� ������ �̿��� ���� �ִ�. ����� false�̴�.

	data1.sort(); //list data1�� data2�� sort �Լ��� ȣ���Ͽ� ������������ �����Ѵ�.
	data2.sort();

	cout << "data1 sort : " << is_sorted(data1.begin(), data1.end()) << endl; //����Ʈ�� ������ �� is_sorted �Լ��� �ٽ� ����� ����. ����� ��� true�̴�.
	cout << "data2 sort : " << is_sorted(data2.begin(), data2.end()) << endl;

	cout << "== data1 ==" << endl; //���ĵ� ����Ʈ�� ����Ѵ�.
	for (auto i : data1)
		cout << i << ", ";

	cout << endl << "== data2 ==" << endl;
	for (auto i : data2)
		cout << i << ", ";

	return 0;
}

/*
�����̳ʰ� ������������ ���ĵǾ� �ִٸ� is_sorted �Լ��� true�� �����Ѵ�.
�����̳��� sort �Լ��� ������������ �����ϱ� ������ sort �Լ��� ���������� �����Ѵٸ� ���� �ش� �����̳��� is_sorted �Լ��� true�� �����ϰ� �ȴ�.
*/