//184
//�º��� �캯���� ū�� Ȯ���ϱ�(isgreater)
#include <iostream>

using namespace std;

int main()
{
	int x = 10; //������ ���� ����
	int y = 20; //������ ���� ����
	double a = 12.2; //�Ǽ��� ���� ����
	double b = 5.6; //�Ǽ��� ���� ����
	
	cout << boolalpha;
	cout << isgreater(20, 11) << endl; //ù ���� ���� �� ŭ. true ����
	cout << isgreater(x, y) << endl; //�� ���� ���� �� ŭ. false����
	cout << isgreater(a, b) << endl;
	cout << isgreater(x, b) << endl;
	
	return 0;
}

/*
ifgreater �Լ��� �� �μ� �� ù ������ ���� �� ũ�� true, �� ��° ���� �� ũ�� false�� ���ϵȴ�.

�Ǽ��� ������ �񱳽ÿ� ������ ����ȯ�� �ʿ����� �ʴ�.
*/
