//189
//ù ���� ����� �����ϱ�(regex_replace)
#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main()
{
	regex re1(R"(\S)"); //���� ���ڰ� �ƴ� ���� ã�� ����ǥ����
	regex re2(R"(\t)"); //Tab(��)�� ã�� ����ǥ����
	string str = "i	like    coding";

	string result1 = regex_replace(str, re1, "[$&]", regex_constants::format_first_only); //�� ������ ��� ����� ���������, regex_constants::format_first_only��� �ɼ��� �߰��Ǿ���. �� ���ο����� ó�� ã�Ƴ� ���ڸ� []�� ���Ѵ�.
	string result2 = regex_replace(str, re2, "(Tab)", regex_constants::format_first_only); //format_first_only �ɼ��� �߰��ϸ� ó�� ã�Ƴ� ����� �����ϰ� �ߴ��Ѵ�. �� ���ο����� \t�� ã�� ���ڿ� (Tab)���� ��ü�Ѵ�.

	cout << "result1 : " << result1 << endl;
	cout << "result2 : " << result2 << endl;

	return 0;
}

/*
�� �������� ����� ��Ÿ ����)
\S : ���� ���ڰ� �ƴ� ��. ����, ����, Ư������ ��� �˻� ��� �ش��Ѵ�.
\t : Tab(��)�� �˻��Ѵ�.
*/