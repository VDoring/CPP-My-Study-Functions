//183
//Not a Number(NAN) Ȯ���ϱ�(isnan)
#include <iostream>

using namespace std;

int main()
{
	double number1 = 1; //�Ǽ� ����
	double number2 = 0.4; //�Ǽ� ����
	double number3 = 0.0; //�Ǽ� ����, 0���� �ʱ�ȭ
	double number4 = 11.2; //�Ǽ� ����
	
	cout << boolalpha;
	cout << isnan(number1 / number4) << endl; //������ ��ȿ���� �˻�. false
	cout << isnan(number2 / number3) << endl; //������ ��ȿ���� �˻�. false
	cout << isnan(number3 / number3) << endl; //������ ��ȿ���� �˻�. true
	cout << isnan(number4 / number1) << endl; //������ ��ȿ���� �˻�. false
	//(0 ������ 0�� �������� ������ �ƴϱ� ������ false�� ���ϵȴ�.)
	
	return 0;
}

/*
NaN�� Not A Number�� ���ڷ� �ڹٽ�ũ��Ʈ �����α׷��ֿ����� ���� ����Ѵ�.
C++������ isnan �Լ��� �̿��� ���� ������ �������� �Ǵ��� �� �ִ�.
*/
