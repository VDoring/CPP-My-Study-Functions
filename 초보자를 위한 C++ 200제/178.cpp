//178
//������ ���� �����ϱ�(partition_copy)
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool IsOdd(int i) { return (1 % 2) == 1; } //Ȧ���� ¦���� �����ϴ� �Լ��� �����Ѵ�.

int main()
{
	vector<int> data1{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15}; //������ ���͸� �����Ѵ�.
	vector<int> odd; //������ ���͸� �����Ѵ�.
	vector<int> even; //������ ���͸� �����Ѵ�.
	
	partition_copy(data1.begin(), data1.end(), back_inserter(odd), back_inserter(even), IsOdd); //partition_copy�� �и��� �����̳� data1�� ���۰� �� ��ġ�� ���ڷ� ����Ѵ�. 5��° �Լ��� �и� �����ε�, �� ���ǿ� �����Ѵٸ� �� ���� �����̳ʿ� ��Ұ� �߰��ǰ�, �������� �ʴ´ٸ� �� ���� �����̳ʿ� ��Ұ� �߰��ȴ�. back_inserter�Լ��� ũ�⸦ ������ �� ���� ��Ȳ���� �����̳��� �� �ڿ� ��Ҹ� �߰��� �� �����ϰ� ����� �� �ִ�.
	
	cout << "== Ȧ�� ==" << endl; //partition_copy ����� ����Ѵ�.
	for(int x : odd)
		cout << x << ", ";
	
	cout << endl << "== ¦�� ==" << endl;
	for(int x : even)
		cout << x << ", ";
	
	return 0;
}

/*
partition ����� �� ���ϰ� ����� �� �ִ� �Լ� partition_copy�̴�.

�� �Լ��� ����ϸ� ����� �����̳ʿ� �ٷ� ������ �� �ִ�.
���� partition�Լ��� �ܵ����� ����ϴ� �� ����, �ǵ��� partition_copy�� ����ϴ� ���� ����.
*/
