//035
//��ȯ������ Ư�� ���� ���� ���ϱ�(for) 
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str = "The jin state was formed in southern Korea by the 3rd century BC";
	
	char find = 'a';
	
	int size = str.size();
	//���ڿ� str�� ũ�⸸ŭ �ݺ��ؾ� �ϱ� ������ �̸� str�� ũ�⸦ ���Ѵ�. 
	//size(str)�� �� ���� ����. ������ �Լ��� �̸��� ���� ȣ�⿡ ������ �����.
	int count = 0;
	
	for(int i = 0; i < size; i++)
	{
		if(str[i] == find)
			count++;	
	}
	
	cout << "������ a�� ������ " << count << "�� �Դϴ�" << endl;
	
	return 0;
}
