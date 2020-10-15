//192
//R �Ǵ� r�� �����ϴ� ���ڿ� ã��(regex_match)
#include <iostream>
#include <vector>
#include <regex>
#include <string>

using namespace std;

int main()
{
	vector<string> Korea = { //R,r,S,s�� �����ϴ� ���ڿ� 8���� ������ �ʱⰪ���� �����Ѵ�.
		"Republic of Korea",
		"republic of Korea",
		"Republic of korea",
		"republic of korea",
		"South Korea",
		"south korea",
		"South korea",
		"south Korea",
	};

	regex re("([Rr]epublic)\\s.*"); //����ǥ���� �ǹ̴� ���ڿ��� R �Ǵ� r�� �����ϸ� ���� ���ڿ��� epublic �̴�. �̾ ������ �־�� �Ѵ�. ���� �� ���ǿ� �����Ѵٸ� �̾����� ���ڵ��� ��� ����� �ش��Ѵ�.

	smatch match_info;

	for (auto i : Korea) //�˻� ����� ����Ѵ�. regex_match�� ù ��° ���ڷ� ���ڿ�, �� ���� ���ڷ� smatch, �� ��° ���ڷ� ����ǥ������ ���� �޴´�.
	{
		if (regex_match(i, match_info, re))
			cout << match_info[0] << endl;
	}

	return 0;
}

/*
�� �������� ����� ��Ÿ ����)

[xy] : ��ȣ ���� ��� ���ڸ� ã�´�.
()   : ��ȣ ���� ������ �ϳ��� �׷��� �ȴ�.
\    : ������ ���� ��Ÿ ���ڸ� ã�´�.
\s   : ���� ���ڸ� ã�´�.
.    : ������ ���ڸ� ��Ÿ����.
*    : �� ���ڰ� 0�� �̻� ��ġ�ϴ� ���ڿ��̴�.

*/