//092
//����ü �ʱ�ȭ�ϴ� ��� 3
#include <iostream>
#include <string>

using namespace std;

//����ü�� string ������ �����ϴ� ����ü ����
struct Info
{
	string country;

	//info ����ü�� ���ԵǴ� ���ο� ����ü.
	//��ó�� ����ü �ȿ� �ٸ� ����ü�� �����Ͽ� ����� �� �ִ�.
	struct Who
	{
		string name;
		string nickname;
	} who;
};

int main()
{
	Info chunk = { "���", {"�屺 ô�ذ�", "�ҵ帶����"} }; //����ü ������ ����. { } 2���� �̿��� string ������ Who ����ü ������ �и��Ͽ� �ʱ�ȭ�Ѵ�.
	Info anjang = { "����", "����� ���︸", "���� ���" }; //����ü ������ �����Ͽ� ���ڿ� 3���� ���ڷ� ����Ѵ�. country, name, nickname ������ ���� ���Ե�.

	cout << chunk.country << ", " << chunk.who.name << ", " << chunk.who.nickname << endl;
	cout << anjang.country << ", " << anjang.who.name << ", " << anjang.who.nickname << endl;

	return 0;
}