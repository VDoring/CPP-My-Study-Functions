//065
//���ڿ� �����ϱ�(sort)
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	string sort_str1 = "gojoseon";
	string sort_str2 = "AaBbCcDdEe";

	sort(sort_str1.begin(), sort_str1.end());
	sort(sort_str2.begin(), sort_str2.end());

	cout << "�ҹ��ڸ� ���� : " << sort_str1 << endl;
	cout << "��ҹ��ڸ� ���� : " << sort_str2 << endl;

	return 0;
}

/*
���ڿ��� ���ĺ� ������ �°� �����Ѵ�.
��ҹ��ڰ� �����ִٸ� �ҹ��ڴ� �빮�� �ڷ� ���ĵȴ�.
*/