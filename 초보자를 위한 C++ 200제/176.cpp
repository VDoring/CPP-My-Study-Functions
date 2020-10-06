//176
//�ݺ��� iterator �Ÿ� ���ϱ�(distance) 
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> data{5,9,7,4,3,8,6}; //������ ���� ����, 5,9,7,4,3,8,6���� �ʱ�ȭ 
	cout << "distance1 : " << distance(data.begin(), data.end()) << endl; //������ ���۰� �� ��ġ�� ���ڷ� �����ϸ� �� ������ �Ÿ��� �� �� �ִ�. ���� data�� �������� ���� ��ġ�� 0�̰� ������ ��ġ�� 6�̴�. 0�� ù ��° �̵� ��ġ�� �����ϰ� 6�� �̵��ϸ� �� 7���� �̵� �ܼ��� ��������. 
	
	vector<int>::iterator end_it = data.end() - 1; //iterator end_if ��ġ�� ������ 9�� �ƴ� �ٷ� ���� 8�� �����Ͽ� ���Ѵ�.
	cout << "distance2 : " << distance(data.begin(), end_it) << endl;
	
	vector<int>::iterator max_it = max_element(data.begin(), data.end()); //max_element, min_element�� �ִ�, �ּ� ���� ���� �� ���� ��ġ���� �Ÿ��� �˾Ƴ���. �ִ밪�� 9�̸� ���� ��ġ���� �� �� �̵��� �����ϴ� ��ġ�̴�. �ּҰ��� 3�̸�, ���� ��ġ���� 4�� �̵��� �����ϴ� ��ġ�̴�. 
	cout << "distance3 : " << distance(data.begin(), max_it) << endl;
	
	vector<int>::iterator min_it = min_element(data.begin(), data.end());
	cout << "distance4 : " << distance(data.begin(), min_it) << endl;
	
	cout << "distance5 : " << distance(max_it, min_it) << endl; //�ִ밪 9���� �ּҰ� 3������ �Ÿ��� 3�̴�. 9�� �ε����� 1�̰� 3�� �ε����� 4�� �ε��� 1�� 4�� ���̴� 3�̶� ��� ���� 3�̴�. 
	
	return 0;
}

/*
���� �̻����� ������?

������ ù ��°, �� ��°�� ������ ���̿� 1���̰� �����Ѵ�.
�ܼ��� begin, end�� ���ڷ� �̿��� �� �Լ� ���ο��� ���� �����ڸ� ����� ����� ��ȯ�Ѵ�.
������, � ������ ����� ����� iterator�� ���ڷ� ����� �� �� ������ ���̸� ��ȯ�Ѵ�.
���� ������ ���� �Ÿ��� ���ϴ� ����� �޶� 1 ���̰� �߻��ϴ� ���̴�. 
*/
