//038
//���� ��ȯ�� �����ϱ�[1](while~continue~break) 
#include <iostream>

using namespace std;

int main()
{
	int number = 0;
	
	while(number < 10) //number�� ���� 10���� �۴ٸ� ���� 
	{
		number++; //���� ������ ������ ���ѷ����� ������ �ȴ�. 
		
		if(number % 3 == 0)
			continue;
		else
			cout << "number �� : " << number << endl;
	}
	
	return 0;
}

/*
for���� Ư�� ���� �ȿ��� �ݺ�������,
while���� Ư�� �������� �ݺ��Ѵ�.

while�� foró�� continue�� break�� ����� �� �ִ�.

*/
