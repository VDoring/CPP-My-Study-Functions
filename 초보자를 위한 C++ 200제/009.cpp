//009
//��ȯ�� ����(for)
#include <iostream>

using namespace std;

int main() {
	int sum1 = 0;
	int sum2 = 0;

	int one = 1;
	int two = 2;

	//for��ȯ���� Ư�� �۾��� �ݺ������ϴµ� ����Ѵ�
	for (int i = 0; i < 5; i++) {
		sum1 += one;
		sum2 += two;
	}

	cout << "�ջ��� : " << sum1 << ", " << sum2 << endl;

	return 0;
}