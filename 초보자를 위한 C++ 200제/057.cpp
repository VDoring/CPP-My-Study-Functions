//057
//���ڿ� ��ġ��(+=)
#include <iostream>
#include <string>

using namespace std;

int main() {
	string king = "���� ����";
	string favorite1 = "���";
	string favorite2 = "�߱�";

	string king_info = ""; //�������

	//+=�̶� ���� ���·� �ϳ��� ���ڿ��� �ٸ� ���ڿ��� ��ģ��.
	king_info += king;
	king_info += "�� ";
	king_info += favorite1;

	//append�� �߰��Ѵٴ� �ǹ̷� +=�� �Ȱ��� �ǹ��̴�. ���ڿ� ���� �ٸ� ���ڿ��� �̾� ���̴� ������ �� �� ��� ���� ����ص� ��� ����.
	king_info.append("�� ");
	king_info.append(favorite2);
	king_info.append("�� �����߽��ϴ�.");

	cout << king_info << endl;

	return 0;
}

/*
C���� ���ڿ��� ��ġ���� char �迭, strcat, �޸� ���Ҵ��� �̿��Ѵ�.
������ C++������ + �����ڷ� ���� ������ �� �ִ�.


string + �����ڸ� �̿��ϸ� string, char, const char *�� ���� �߰��� �� �ִ�.
string�� ���� ���۸� ������ �����Ƿ� ���� ���� ���ڿ� ó���� �����ϴ�.

���� append, insert, push_back �Լ��ε� ���� �Ǵ� ���ڿ��� �߰��� �� �ִ�.
string.append("ABC",2)ó�� �߰��� ���ڿ��� ũ�⸦ ������ �� ������, string.append("ABC", 1, 2)ó�� ���ڿ� �Ϻθ� ������ �߰��� ���� �ִ�.

insert�� ������ ��� string.insert(2, "ABC", 2), string.insert(0, "ABC", 1, 2)ó�� �߰��� ����, �߰��� ���ڿ� ���� ���� ������ ���� �ִ�.

��ó�� string�� ���α׷��Ӱ� ���� �ٷ� �� �ִ� ����� �پ��ϴ�.

*/