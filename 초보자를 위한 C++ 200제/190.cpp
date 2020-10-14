//190
//��� ���� ã��(regex_search)
#include <iostream>
#include <vector>
#include <regex>
#include <string>

using namespace std;

int main()
{
	regex re(R"(\d+)"); //��� ���ڸ� ã�� ����ǥ����
	const string str = "12 34ab 56 cd78__ !9 10 ==11"; //���ڸ� ã�ƺ� ���ڿ��� �����Ѵ�.

	vector<string> result; //ã�Ƴ� ���ڸ� ������ ���͸� �����Ѵ�.
	auto start = str.begin(); //while���� ����ϴµ� �ʿ��� ���ڿ��� ���� ��ġ�� �����Ѵ�.
	auto end = str.end(); //while���� ����ϴµ� �ʿ��� ���ڿ��� �� ��ġ�� �����Ѵ�.

	smatch match_info; //ã�� ����� ������ smatch ������ �����Ѵ�.

	while (regex_search(start, end, match_info, re)) //regex_search�� �˻��� ������ ���� ������ while���� �ݺ��ȴ�. ù ���� ���ڴ� �˻��� ���ڿ��� ���� ��ġ, �� ���� ���ڴ� �˻��� ���ڿ��� ���� ��ġ, �� ��° ���ڴ� ����� ������ smatch, �� ���� ���ڴ� ����ǥ�����̴�.
	{
		result.push_back(match_info.str()); //����ǥ�������� ã�Ƴ� ����� ���ڿ��� ��ȯ�Ͽ� ���� result�� �����Ѵ�.
		start = match_info[0].second; //���ͷ����� start�� second�� ��� �����ϹǷ� start�� ������ ���ڿ��� ������ ������ while���� �ݺ��ȴ�. (smatch�� ������ ���Ѱ��� �� ���� ���� ����.)
	}

	for (auto i : result) //��� ���� �˻� ����� ����Ѵ�.
		cout << i << ", ";

	return 0;
}

/*
�� �������� ����� ��Ÿ ����)
\d : ���ڸ� ã�´�.
*/

/*
smatch�� ����)

[0] - �׻� �� ��ġ�� ��� ���� ����
[0].matched - ���� ã������ true, �� ã���� false
[0].first - �˻��� �̿��� ��ü ���ڿ�
[0].second - matched�� true��� ��������� first ���ڿ��� ������ ������ ���ڿ�

��)
matched = true
first - "12 34ab 56 cd78__ !9 10 ==11"
second - "34ab 56 cd78__ !9 10 ==11"

*/