//174
//����� ���� ���ϱ�(is_permutation)
#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

int main()
{
	array<int, 5> data1 = { 5,3,1,7,9 }; //������ array�� 3�� �����Ѵ�. data1�� data2�� ���ĵ��� �ʾ����� ���� ��Ҵ� ���� 1,3,5,7,9�� �Ȱ���.
	array<int, 5> data2 = { 1,3,5,7,9 };
	array<int, 7> data3 = { 2,2,1,3,5,7,9 }; //data3�� 1,3,5,7,9�� �����Ͽ� �߰��� ���� 2�� �� �� �� �����Ѵ�. data3�� ũ��� 7�μ� data1, data2���� �� ũ��.

	cout << boolalpha;
	cout << "data1 == data2 : " << //is_permutation �Լ��� data1�� ���۰� �� ��ġ �׸��� data2�� ���� ��ġ�� ���ڷ� �ѱ��. data1�� ��� ��Ҹ� data2�� ���� ��ġ���� ���Ѵ�. ��� �ε������� ���� �ٸ����� ���� �����ʹ� ��� �Ȱ��� ������ ����� true�̴�.
		is_permutation(data1.begin(), data1.end(), data2.begin()) << endl;

	cout << "data1 == data3 : " << //is_permutation �Լ��� data1�� ���۰� �� ��ġ �׸��� data3�� ���� ��ġ�� ���ڷ� �ѱ��. data1�� ��� ��Ҹ� data3�� ���� ��ġ���� ���Ѵ�. data1������ ���� 2�� �����Ƿ� ����� false�̴�.
		is_permutation(data1.begin(), data1.end(), data3.begin()) << endl;

	cout << "data1 == data2 (+2) : " << //is_permutation �Լ��� data1�� ���۰� �� ��ġ, �׸��� data3�� 3��° ��ġ�� ���ڷ� �ѱ��. begin�� �ε��� 0, begin + 1�� �ε��� 1, begin + 2�� �ε��� 2�̴�. begin + 2�� ��, �� ���� �����͸� ����Ų��. data1�� ��� ��Ҹ� data3�� 3���� ��ġ���� ���Ѵ�. data1�� ������ ������ 1,3,5,7,9�� data3�� �� ���� ��ġ�� 1���� ������ 9������ �Ȱ���. ����� true�̴�.
		is_permutation(data1.begin(), data1.end(), data3.begin() + 2) << endl;

	return 0;
}

/*
is_permutation �Լ��� ���ĵ��� ���� �� �����̳��� ���(�Ǵ� �Ϻ� ����)�� ���Ѵ�. ������ ����� ������ ��� �Ȱ��ٸ� true, �׷��� �ʴٸ� false�� ���ϵȴ�.
*/