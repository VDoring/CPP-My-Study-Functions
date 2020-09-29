//158
//list ��ġ��, �̾� ���̱�(merge, splice)
#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<int> data1; //������ ����Ʈ 2���� �����ϰ� �ʱⰪ�� ���� {2,7}�� {3,4,5}�� �����Ѵ�.
	list<int> data2{3, 4, 5};

	data1.push_back(2);
	data1.push_back(7);

	data1.merge(data2); //merge �Լ��� �̿��Ͽ� data1�� data2�� ��ģ��.
	                    //merge�� Ư¡�� ũ�� 2������. �ϳ��� ��ĥ �� ������������ �ڵ� ���� �ȴٴ� ��. �ٸ� �ϳ��� ���ڷ� ���Ǵ� �����̳ʰ� merge ���� �����Ͱ� �����ȴٴ� ���̴�.
	                    //�� ������ ��ġ�� data1���� 2,3,4,5,7�� ������������ ����ǰ� data2�� �� �����̳ʰ� �ȴ�.

	cout << "== List Merge" << endl; //data1�� ����Ѵ�. ����� 2,3,4,5,7 �̴�.
	for (list<int>::iterator it = data1.begin(); it != data1.end(); ++it)
		cout << ' ' << *it;
	cout << endl;

	data2 = { 3,4,5 }; //data2�� 3,4,5�� �����Ѵ�.
	data1.splice(data1.begin(), data2); //splice �Լ��� �̾� ���δٴ� �ǹ��̴�. data1�� �� �տ� data2�� �����ϱ� ������ 24�� ������ ������ data1���� 3,4,5,2,3,4,5,7�� ����ȴ�.

	cout << "== List Splice ==" << endl; //data1�� ����Ѵ�. ����� 3,4,5,2,3,4,5,7 �̴�.
	for (auto it = data1.begin(); it != data1.end(); ++it)
		cout << ' ' << *it;

	return 0;
}