//054
//���ڿ� ��ȸ�ϱ�(find) 
#include <iostream>
#include <string>

using namespace std; 

int main() {
	string baekhap_war = "���չ� ���� : ���� ���� �ο�â�� �ϱ���� ������ ����";
	
	//���ڿ� �ڿ� find �Լ��� ȣ���Ͽ� ã���� �ϴ� ������ ���� �Ǵ� ���ڿ��� �Է��Ѵ�.
	//���� ã�� ���ߴٸ� -1�� ���ϵǰ�, ã�Ҵٸ� ���� �Ǵ� ���ڿ��� ���� ��ġ�� ���ϵȴ�. 
	int rtn = baekhap_war.find("�ο�â");
	
	if(rtn > 0)
		cout << "���ڿ��� ã�ҽ��ϴ�. ��ġ�� " << rtn << "�Դϴ�." << endl;
	else
		cout << "���ڿ��� ã�� �� �����ϴ�." << endl;

	return 0;
}
