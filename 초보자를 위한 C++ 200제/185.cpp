//185
//�º��� �캯���� ������ Ȯ���ϱ�(isless)
#include <iostream>

using namespace std;

int main()
{
	int x = 10; //������ ���� ����
	int y = 20; //������ ���� ����
	double a = 12.2; //�Ǽ��� ���� ����
	double b = 5.6; //�Ǽ��� ���� ����
	
	cout << boolalpha;
	cout << isless(20, 11) << endl; //ù ���� ���� �� ŭ. false ����
	cout << isless(x, y) << endl; //�� ���� ���� �� ŭ. true ����
	cout << isless(a, b) << endl;
	cout << isless(x, b) << endl;
	
	return 0;
}

/*
ifgreater �Լ��� �� �μ� �� ù ������ ���� �� ũ�� false, �� ��° ���� �� ũ�� true�� ���ϵȴ�.

�Ǽ��� ������ �񱳽ÿ� ������ ����ȯ�� �ʿ����� �ʴ�.
*/
