//086
//�迭 �Ϻ� �����ϱ�(fill)
#include <iostream>
#include <vector>
#include <algorithm> //fill()�� ����ϱ� ���� include

using namespace std;

int main()
{
	int data1[10]{ 0, }; //1�����迭�� 0���� �ʱ�ȭ

	//fill �Լ��� ù ��° ���ڷ� ������ �迭 ������ ���� ��ġ, �� ���� ���ڷ� ������ ��ġ�� �޴´�. ������ ���ڴ� ������ ���̴�.
	fill(data1, data1 + 3, 10); //data1[0], data1[1], data1[2]�� 10���� �����Ѵ�.
	fill(data1 + 4, data1 + 8, 20); //������ �迭 ������ �ε��� 4~7�� �����Ǿ�����, �� ������ ��� 20�� �Ҵ�ȴ�.

	cout << "== data1 ���==" << endl;

	for (int i = 0; i < 10; i++) //data1�� ��� ���� ���.
		cout << data1[i] << ",";

	vector<int> data2({ 0,1,2,3,4,5,6,7 }); //������ ���͸� �����ϰ� 0~7�� �ʱ�ȭ�Ѵ�.
	fill(data2.begin(), data2.begin() + 3, 30); //fill �Լ��� �Ϲ� �迭�� �����̳ʸ� ���ڷ� �޴´�. ������ ������ 0~2�� �����ϰ� �ش� ������ 30���� �����Ѵ�.

	cout << endl << endl << "== data2 ���" << endl;

	int size = data2.size();
	for (int i = 0; i < size; i++) //data2�� ��� ���� ���.
		cout << data2.at(i) << ", ";

	return 0;
}

/*
�迭 ����� �Բ� Ư�� ������ �迭 ��ü�� �߰��� �� �ִ�.
�׸��� �迭 �Ϻ� ������ Ư�� ������ ������ �� �ִ�.
*/