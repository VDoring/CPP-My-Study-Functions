//053
//���ڿ� ���ϱ�(string.compare) 
#include <iostream>

using namespace std; 

int main() {
	//������ ���� ���� 
	string seven_war = "�����ֶ�";
	string korea_war = "�ѱ�����";
	
	//���ڿ��� ���� ���� compare()�Լ��� �̿��Ѵ�.
	//���� ���ڿ��� compare()�Լ��� ȣ������ ���ڷ� �ٸ� ���ڿ��� �������, �̋� ���� ���� ������ 0 , �ٸ��� -1�� ���ϵȴ�. 
	if(seven_war.compare(korea_war) == 0)
		cout << "���� ���ڿ��Դϴ�\n";
	else
		cout << "�ٸ� ���ڿ��Դϴ�\n";
	
	return 0;
}

/*
C++������ string�� Ŭ���� ���·� �����Ǳ� ������ ������ �Լ��� ���� ����� �� �ִ�. 
*/
