//181
//�� ������ ������ ���ϱ� (set_difference)
#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
	vector<int> data1 = {1,3,5,7,9}; //������ ���� ����
	vector<int> data2 = {2,4,6,7,9}; //������ ���� ����
	vector<int> diff1; //�������� ������ ���� ����
	vector<int> diff2; //�������� ������ ���� ����
	
	set_difference(data1.begin(), data1.end(), //ù ��°���� �� ��° ���ڴ� ���� �����̳ʿ� ���۰� ���� ��ġ�̴�. 5��° ���ڴ� �������� ������ ���ο� �����̳��̴�. diff1.begin�̶� diff1 �����̳��� �� �պ��� �������� �߰��Ѵٴ� �ǹ��̴�.
		data2.begin(), data2.end(),
		inserter(diff1, diff1.begin()));
		
	set_difference(data1.begin() + 2, data1.end(), //17~19���ΰ� ���� ���������, �� ���� ��ġ�� �ε��� 2������ �����Ѵ�. �ε��� 2���� data1�� 5, data2�� 6�� ����Ų��. �׸��� �������� diff2�� �� ��ġ�� �߰��Ѵ�. �����̳��� ���ݸ� ���ϰ� ����� diff2�� ���� �߰��Ѵٴ� �������� �����Ѵ�.
		data2.begin() + 2, data2.end(),
		inserter(diff2, diff2.end()));
		
	cout << "== diff1 ==" << endl; //������ ���� ��� ���
	for(auto i : diff1)
		cout << i << ", ";
	
	cout << endl << "== diff2 ==" << endl;
	for(auto i : diff2)
		cout << i << ", ";
	
	return 0;
}
