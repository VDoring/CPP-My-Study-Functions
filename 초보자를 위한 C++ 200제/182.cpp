//182
//�Ǽ��� 0�� �ƴ��� Ȯ���ϱ�
#include <iostream>

using namespace std;

int main()
{
	double number1 = 1;
	double number2 = 0.4;
	double number3 = 0.0; //number3�� 0���� �ʱ�ȭ��.
	double number4 = 11.2;
	
	cout << boolalpha;
	
	//isnormal �Լ��� �̿��� ���� 4���� ��ȿ���� �˻��Ѵ�.
	//����, ��ȿ���� ���� �� 0�̶�� false�� �����ϰ� �׷��� �ʴٸ� 1, true�� �����Ѵ�.
	//����� true, true, false, true�̴�.
	cout << isnormal(number1) << endl;
	cout << isnormal(number2) << endl;
	cout << isnormal(number3) << endl;
	cout << isnormal(number4) << endl;
	
	return 0;
}

/*
���α׷����� �ϴٺ��� �Ǽ��� �μ��� ��� ����ϴ� ��찡 ����.
�̷� ��, 0���� �����ϸ� ���α׷� ������ �߻��Ѵ�. �̸� �����ϱ� ���� ����� �� �ִ� �Լ��� isnormal �̴�.
*/
