//032
//��ø ���ǹ� �����ϱ�(if~else if~else) 
#include <iostream>

using namespace std;

int main()
{
	int number1 = 100;
	int number2 = 6;
	
	if(number1 < number2)
		cout << "number2�� �� Ů�ϴ�" << endl;
	else if(number1 > number2)
		cout << "number1�� �� Ů�ϴ�" << endl;
	else
		cout << "number1�� number2�� �����ϴ�" << endl;
	
	if(number2 < 7)
	{
		if(number2 > 3)
		{
			if(number2 == 4)
				cout << "number2�� 4�Դϴ�" << endl;
			else if(number2 == 5)
				cout << "number2�� 5�Դϴ�" << endl;
			else
				cout << "number2�� 6�Դϴ�" << endl;
		}
		else
		{
			if(number2 == 3)
				cout << "number2�� 3�Դϴ�" << endl;
			else if(number2 == 2)
				cout << "number2�� 2�Դϴ�" << endl;
			else
				cout << "number2�� 1�Դϴ�" << endl;
		}
	}
		
	return 0;		
}

/*
if������ ������ ���� �� �ξ� ��ø�Ͽ� ����� �� �ִ�.
else if ������ �� �ٸ� ������ ������ �� �ִ�.

�ٸ�, else if�� �ѹ� ����ϴ� ���� �������� 2��, 3�� ����ϴ� ���� �����Ѵ�.
���ǹ��� ������ ���ϴ� ���� PC(���α׷� ī����)�� �����Ͽ� ���α׷� ���ɿ��� ���� �ʰ� �������� �Ǿ����� �������� �������� �����̴�.

���� ��ø ���ǹ��� ������ 2�� �̻��̸�, switch case�� ����� �����Ѵ�.
(12~17������ �ùٸ� if else ��ø���̳� 19~39������ �������� �ʴ´�) 

*/
