//034
//��ø ��ȯ�� �����ϱ�(for~continue~break) 
#include <iostream>

using namespace std;

int main()
{
	int number = 7;
	
	for(int i = 0; i < 10; i++) {
		if(i % 3 == 0) //i�� 3�� ������ �ݺ��� ������ 
			continue;
		else if(i == number) //i�� number�Ͻ� �ݺ��� ���� 
			break;
		else
			cout << "���� i �� : " << i << endl;
	}
	
	return 0;
}
