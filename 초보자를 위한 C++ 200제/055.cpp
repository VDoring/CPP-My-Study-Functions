//055
//���ڿ� ���� ���ϱ�(length) 
#include <iostream>
#include <string>

using namespace std; 

int main() {
	string jinduk_name = "��¸�";
	string jinsung_name = "kim man";
	
	cout << "�������� �̸� ���� : " << jinduk_name.length() << endl; // 6
	cout << "�������� �̸� ���� : " << jinsung_name.length() << endl; // 7
	
	return 0;
}

/*
���ĺ��� ��ҹ��� 52���� 0���� 127�� ������ �ƽ�Ű ���ڷ� ǥ���� �� �ִ�.
������, �ѱ��� �ʼ�, �߼�, ���� �� �� ���� 1�� ���� �ѱ⶧���� 0���� 65535���� ǥ�� ������ 2����Ʈ�� �� ���ڸ� ��´�.

�׷��� �ѱ��� ������ ���� ���ڿ� ���̰� �� ��� �þ��. 

*/
