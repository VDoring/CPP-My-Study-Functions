//076
//Call by Address �����ϱ�
#include <iostream>

using namespace std;

//�Լ��� ���ڷ� �����͸� �޴µ�, �� ��� �Լ� ȣ���ϴ� �������� �ּҸ� ��������� �����ؾ� �Ѵ�.
void Func1(bool *is_on)
{
	cout << "Call by address : " << sizeof(is_on) << endl;
}

//�Լ��� ���ڷ� �ּҸ� �޴µ�, �� ��� �Լ� ȣ���ϴ� �������� ���� �״�� �ѱ��. ������ �޴� ������ �����ͷ� �޴´�.
void Func2(bool &is_on)
{
	cout << "Call by reference : " << sizeof(is_on) << endl;
}

int main()
{
	bool is_tmp = true;

	Func1(&is_tmp);
	Func2(is_tmp);

	return 0;
}