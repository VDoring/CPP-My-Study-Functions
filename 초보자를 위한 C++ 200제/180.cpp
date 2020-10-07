//180
//���ϴ� ������ŭ �����ϱ�(copy_n)
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int data[] = {1,2,3,4,5,6,7,8,9,10}; //������ �迭 ����
	vector<int> result; //������ ���� ����
	
	copy_n(data, 5, back_inserter(result)); //copy_n �Լ��� ù ��° ���� data�� ������ ����̸�, �� ���� ���� 5�� data ������ �� �� 5���� ���Ѵ�. �� ��° ���ڴ� result ���ͷ� �̰��� ������ ����̴�.
	
	cout << "== result ==" << endl; //copy_n ����� ����Ѵ�.
	for(auto i : result)
		cout << i << ", "; //����� 1,2,3,4,5 �̴�.
	
	return 0;
}

/*
��ü�� �ƴ� �Ϻ� �迭�� ������ ��, copy_n �Լ��� ����Ѵ�.
copy_n �Լ��� 3���� ���ڸ� ����ϴµ�, ù ��°�� ������ ���, �� ��°�� ���ϴ� ����, �� ��°�� ����� �迭�̴�.
*/
