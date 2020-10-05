//170
//���ǿ� ��� ��Ұ� �´��� �˻��ϱ�(all_of)
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<int> data1 = { 1,3,5,7 }; //������ ���� ����
	vector<string> data2 = { "ab", "cd", "ef" }; //���ڿ��� ���� ����

	if (all_of(data1.begin(), data1.end(), [](int i) {return i % 2; })) //data1�� ���۰� �� ��ġ�� all_of �Լ��� ù ��°, �� ���� ���ڷ� ����Ѵ�. �� ���� ���ڴ� ���ٸ� �̿��� Ư�� ������ �����Ѵ�.
		cout << "data1 : ��� Ȧ���Դϴ�" << endl;                      //data1�� ��� �����͸� ������ 2�� ������ �� ��� 0�� �����ϸ� ¦���̴�. ��� �����Ͱ� Ȧ���̸� �� �ϳ��� �����͵� ¦���� �ƴ϶�� 16�� ������ ����ȴ�.

	if (all_of(data1.begin(), data1.end(), [](int i) {return i < 10; })) //data1�� ��� �����Ͱ� 10���� �۴ٸ� 19�� ������ ����ȴ�.
		cout << "data1 : ��� 10���� �۽��ϴ�" << endl;

	if (all_of(data2.begin(), data2.end(), [](string i) {return i.length() < 4 ? true : false; })) //data2�� ��� ���ڿ� ������ ���̰� 4���� �۴ٸ� 23�� ������ ����ȴ�. ���ڿ��� ���̴� length �Լ��� �̿��Ͽ� �˾Ƴ� �� �ִ�.
		cout << "data2 : ��� ���̰� 4 �����Դϴ�" << endl;

	if (all_of(data2.begin(), data2.end(), [](string i) {return i.find('A'); })) //data2�� ��� ���ڿ��� �빮�� A�� ���ԵǾ� ���� �ʴٸ� 27�� ������ ����ȴ�. ���ڿ����� ���ڸ� ã�� �� find �Լ��� ����Ѵ�.
		cout << "data2 : ��� ���� A�� �������� �ʽ��ϴ�" << endl;

	return 0;
}

/*
all_of �Լ��� �����̳ʸ� ��ȸ�ϸ� ��� �����Ͱ� Ư�� ���ǿ� �´��� Ȯ���ϴ� �Լ��̴�.
���ڴ� 3���� �ʿ��ѵ�, ù ������ �����̳��� ��ȸ ���� ��ġ, �� ������ �����̳��� ��ȸ ������ ��ġ, �� ��°�� ����� ���� �����̴�.
*/