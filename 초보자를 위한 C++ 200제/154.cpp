//154
//�����̳ʿ� �迭 �����ϱ�(copy)
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> number1({ 1,2,3,4,5 }); //int �� ���͸� �����Ѵ�. number1�� �ʱⰪ�� 5�� ���� ������, number2�� �ƹ� �����͵� ���� ���� �ʴ�.
	vector<int> number2;

	copy(number1.begin(), number1.end(), back_inserter(number2)); //copy �Լ��� ���ڷ� �����̳� number1�� ó�� ��ġ�� ������ ��ġ�� �����Ѵ�. �׸��� ������ ���ڷ� number2�� �������� �ǹ��ϴ� back_inserter �Լ��� ȣ���Ѵ�. ������ copy �Լ��� ���� number1�� ��� �����Ͱ� number2 �� ��ġ���� ����ȴ�.

	for (auto i : number2) //���簡 ���� number2�� ����Ѵ�.
		cout << i << endl; //����� 1,2,3,4,5 �̴�.

	double number3[5] = { 1.2, 3.4, 4.5, 5.6, 6.77 }; //�Ǽ��� �迭 2���� �����Ѵ�. number3�� �ʱ� ���� ���������� number4�� �ʱⰪ�� ���� �ʴ� �� �迭�̴�.
	double number4[5];

	copy(begin(number3), end(number3), begin(number4)); //13�� ����ó�� �����̳ʸ� �����ϴ� ������� �迭 ���縦 �õ��Ѵ�. 21�� ���ο����� number4�� �� �� �κк��� ���簡 �̷�������� begin�� ȣ���Ͽ� number4�� ���ڷ� �ѱ��. �̸� ���� number4�� �� �պκп� number3�� ������ ��ΰ� �߰�(����)�ȴ�.

	for (auto i : number4) //���簡 ���� number4�� ����Ѵ�.
		cout << i << endl; //�����1.2, 3.4, 4.5, 5.6, 6.77 �̴�.

	return 0;
}

/*
�����̳ʳ� �迭�� ������ �� copy �Լ��� �̿��ϸ� �ս��� �ذ��� �� �ִ�.
*/