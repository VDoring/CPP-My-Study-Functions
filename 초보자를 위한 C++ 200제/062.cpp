//062
//���ڿ� �Ϻ� ��ü�ϱ�(replace)
#include <iostream>
#include <string>

using namespace std;

int main() {
	string sentence = "i like coding";
	string find_str = "coding"; //ã�� ���ڿ�
	string replace_str = "history"; //�ٲ� ���ڿ�

	sentence.replace(sentence.find(find_str), find_str.length(), replace_str); //���ڿ� ��ü �۾�.
	//sentence.find(find_str) : ��ü ���ڿ����� "coding"�� ã�� �� ��ġ�� �˾Ƴ���.
	//find_str.length() : ã�ƾ� �� ���ڿ��� ���̸� replace �Լ��� �˷��ش�.
	//replace_str : ã�Ƴ� ���ڿ��� ��ü�� ���ο� ���ڿ��̴�.

	cout << sentence << endl;

	return 0;
}