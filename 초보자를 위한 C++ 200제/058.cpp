//058
//���ڿ� �߰��� ���ڿ� �߰��ϱ�(insert)
#include <iostream>
#include <string>

using namespace std;

int main() {
	string sentence = "i coding";
	sentence.insert(2, "hate "); //sentence ���ڿ��� 2���� �ǹ�('i'=0����, '����'=1����, 'c'=2����, o=3��°, ...)
	                             //2���� ��ġ�� ���ο� ���ڿ� �߰�
	cout << sentence << endl; //��� Ȯ��

	sentence.insert(7, "or like "); //sentence ���ڿ��� 7���� ��ġ�� ���ο� ���ڿ� �߰�
	cout << sentence << endl; //��� Ȯ��

	return 0;
}
