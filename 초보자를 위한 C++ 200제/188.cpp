//188
//���ڿ� �Ϻ� �����ϱ�(regex_replace)
#include <iostream>
#include <regex> //����ǥ������ ����ϱ� ���� include
#include <string>

using namespace std;

int main()
{
	regex re1(R"(l|i|k|e)"); //���� l, i, k, e�� ã�� ����ǥ�����̴�. �߰��� |�� �����ڷ� ����� like �ܾ �ƴ� ���ĺ� l, i, k, e 4���� ��Ÿ����.
	regex re2(R"(\D)"); //���ڸ� ������ ������ ã�� ����ǥ�����̴�.
	regex re3(R"(\s)"); //���鹮�ڸ� ã�� ����ǥ�����̴�.
	string str = "i like coding"; //����ǥ�������� Ư�� ������ ã�ƺ� ���ڿ��� �����Ѵ�.
	
	string result1 = regex_replace(str, re1, "[$&]"); //regex_replace ù ���� ���ڴ� ��� ���ڿ�, �� ��° ���ڴ� ����ǥ����, �� ��° ���ڴ� ������ �����̴�. $&�� ã�Ƴ� ���� �Ǵ� ���ڿ��� �ҷ��´ٴ� ������, �� ��쿡�� ���ĺ� 4���� ��ġ�ϴ� �κ��� �� �ڷ� []�� ���δ�.
	string result2 = regex_replace(str, re1, "*"); //ã�Ƴ� ���ĺ� l, i, k, e�� *�� �����Ѵ�.
	string result3 = regex_replace(str, re2, "_$&_"); //���ڸ� ������ ��� ���� �յڿ� _�� ���δ�.
	string result4 = regex_replace(str, re3, "(space)"); //���鹮�ڸ� ã�� (space)�� ��ü�Ѵ�.
	
	cout << "result1 : " << result1 << endl;
	cout << "result2 : " << result2 << endl;
	cout << "result3 : " << result3 << endl;
	cout << "result4 : " << result4 << endl;
	
	return 0;
}

/*
�� �������� ����� ��Ÿ ����
|  : or. �Ǵ� �̶� �ǹ̷� ���� ������ ����� �� �����ڷ� ����Ѵ�.
\D : ���ڸ� ������ ���ڸ��� ������� �Ѵ�.
\s : ���� ���ڸ� ������� �Ѵ�.
*/
