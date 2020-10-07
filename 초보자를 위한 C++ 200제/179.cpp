//179
//���ǿ� �´� ������ �����ϱ�(copy_if)
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool IsOdd(int i) { return (1 % 2) == 1; } //Ȧ���� ¦���� �����ϴ� �Լ��� �����Ѵ�.

int main()
{
	vector<int> data1{1,2,3}; //������ ���͸� �����Ѵ�.
	vector<int> data2{4,5,6}; //������ ���͸� �����Ѵ�.
	vector<int> data3{7,8,9}; //������ ���͸� �����Ѵ�.
	vector<int> result; //result�� �� �����̴�.
	
	copy_if(data1.begin(), data1.end(), back_inserter(result), IsOdd); //data1�� ���۰� �� ��ġ�� ���ڷ� ����ϸ�, ���ǿ� �´� �����Ͱ� �߰��� �����̳ʴ� result�̴�. �� ���θ� ���� Ȧ�� 1,3�� result�� ����ȴ�.
	copy_if(data2.begin(), data2.end(), back_inserter(result), [](int arg) //data2�� ���۰� �� ��ġ�� ���ڷ� ����ϸ�, ���ǿ� �´� �����Ͱ� �߰��� �����̳ʴ� result�̴�. 5���� ���� ������ 4�̴�. �� ������ ���� 4�� ����ȴ�.
		{ return arg < 5; });		
	copy_if(data3.begin(), data3.end(), back_inserter(result), [](int arg) //data3�� ���۰� �� ��ġ�� ���ڷ� ����ϸ�, ���ǿ� �´� �����Ͱ� �߰��� �����̳ʴ� result�̴�. 8���� ū ������ 9�̴�. �� ������ ���� 9�� ����ȴ�.
		{ return arg > 8; });
	
	cout << "== result ==" << endl; //copy_if ����� ����Ѵ�.
	for(auto i : result)
		cout << i << ", ";
	
	return 0;
}

/*
copy_if �Լ����� ���ڰ� 4�� �ʿ��ϴ�. ���� ��� �����̳��� ���۰� �� ��ġ, ��Ҹ� �߰��� �����̳�, ������ �����̴�.
*/
