//194
//���ڿ��� ��� �ܾ� ã��(regex_iterator)
#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main()
{
	string str = "Jolbon Buyeo was the predecessor to Goguryeo, and in 538, Baekje renamed itself Nambuyeo (South Buyeo)"; //�� ���ڿ����� �ܾ ã�´�. ���ڰ� ���Ե��� �ʰ� ���� ���ڷθ� �̷��� ���� �ܾ�� �Ǵ��Ͽ� ã�Ƴ���.

	regex re("([A-Za-z]+)"); //�빮�ڿ� �ҹ��ڸ� ��� �����߱� ������ ��� ���ĺ��� �ǹ��Ѵ�. Ư������, ���� ���� ������ �������� �ʾ� ������ �������� �̷��� ���ڿ��� �ܾ�� �ν��Ѵ�. ���� ab12cd��� ���ڿ��� �ִٸ�, ab�� cd�� �и��Ͽ� �ܾ� 2���� �ν��Ѵ�.

	auto start = sregex_iterator(str.begin(), str.end(), re); //sregex_iterator�� ���ڿ��� ó���� ���� �и��Ͽ� ���ο� �����ϴ� �ݺ����̴�. ���������� ����ǥ���İ� ��ġ�ϴ���, ��ġ�ϴ� ������ �ε����� ������ڵ� �����ϰ� �ִ�.
	auto end = sregex_iterator(); //���� ������ ���ڰ� ���ٸ� ������ end��ġ�� ����Ű�� �ȴ�.

	cout << "== �ܾ� ���� : " << distance(start, end) << " ==" << endl; //distance �Լ��� �̿��� start�� end �ݺ��� ���� ���Ͽ� �ܾ� ������ ����Ѵ�. start ��ġ���� end ��ġ������ �Ÿ��� �� ������ �ȴ�.

	for (sregex_iterator i = start; i != end; ++i) //position�� �ܾ��� ���� ��ġ, str�� ���ڿ� ���̴�. sregex_iterator�� �Ϲ����� iterator�� �Ȱ��� ������� ����� �� �ִ�.
		cout << i->position() << ", " << i->str() << endl;

	return 0;
}

/*
�� �������� ����� ��Ÿ ����)

A-Z : A���� Z������ ��� ����(�빮��)
a-z : a���� z������ ��� ����(�ҹ���)
+   : ���� ��Ÿ ���ڰ� 1�� �̻� �ݺ��ȴ�.

*/