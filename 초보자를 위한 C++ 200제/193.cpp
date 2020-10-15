//193
//����, �� ���ڷ� ���ڿ� ã��(regex_match)
#include <iostream>
#include <vector>
#include <regex>
#include <string>

using namespace std;

int main()
{
	vector<string> Korea = {
		"Republic of Korea",
		"republic of Korea, since 1945",
		"Republic of korea, since 1945",
		"republic of korea",
		"south Korea, since 1945",
		"south korea",
		"SOUTH KOREA, since 1945",
		"south Korea",
	};

	regex re("(SOUTH|south).*(1945)"); //ù��, ���ڿ��� SOUTH �Ǵ� south�� �����ؾ� �Ѵ�.
	                                   //��°, �߰��� � ���ڰ� �ֵ� ���������
	                                   //��°, ���ڿ��� ������ 1945�� �־�� �Ѵ�.
	                                   //��, SOUTH �Ǵ� south �� �����ؼ� 1945�� ������ ���ڿ��� ã�Ƴ��� ���̴�.
	smatch match_info;

	for (auto i : Korea) //�˻� ����� ����Ѵ�. regex_match ������� �� ������ �Ȱ���.
	{
		if (regex_match(i, match_info, re))
			cout << match_info[0] << endl;
	}

	return 0;
}