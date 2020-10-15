//191
//Go-�� �����ϴ� �ܾ� ã��(regex-search)
#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main()
{
	string str = "Wang Geon, a descendant of Go-gu-ryeo nobility, deemed the nation as the successor of Go-guryeo";

	smatch match_info;

	regex re(" Go-([^ ]*)"); //ù°, Go-�� �����ϴ� ��� �ܾ�(�Ǵ� ���ڿ�)�� ã���� ��°, Go-�� ���� ���� ���̸� ��������� ��´�.

	while (regex_search(str, match_info, re)) //regex_search �Լ��� ���ڿ�, ����� ������ ����, ����ǥ������ ���ڷ� �����Ѵ�.
	{                                         
		cout << match_info.str() << " " << endl;

		str = match_info.suffix().str(); //suffix�� �ռ� �������� �ٷ�� .second�� �Ȱ���. ã�Ƴ� ���ڿ��� ������ �������� �ǹ��Ѵ�. �̷��� ��� �ܾ �ٿ����� .suffix�� ���� ���� ������ while���� �ݺ��ȴ�.
	}

	return 0;
}

/*
�� �������� ����� ��Ÿ ����)

[]    : ��ȣ ������ ���ڸ� ã�´�.
^���� : ������ ������ ��� ���ڸ� ã�´�.
*/