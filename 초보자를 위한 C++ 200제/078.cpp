//078
//const ������ �����ϱ�
#include <iostream>

using namespace std;

int main()
{
	int number1 = 10;
	int number2 = 20;

	int const *ptr1; //const int�� ����Ű�� ����� ������ �� ������ ���� ���� �ٲ� �� ����.
	                 //����Ű�� ����� ������ �� ������ ����Ű�� ����� ���� ������ �� ���ٴ� �ǹ��̴�.
	ptr1 = &number1;
	//ptr1 = number1;
	ptr1 = &number2;

	int *const ptr2 = &number1; //int�� ����Ű�� const�����ͷ� �ʱⰪ�� �ݵ�� �ʿ��ϸ� ����Ű�� ����� �ٲ� �� ����.
	                            //��, * ��ġ�� ���� �ٲ� �� ���� ���� �޸�����.
	*ptr2 = number2;
	//*ptr = &number2;

	return 0;
}