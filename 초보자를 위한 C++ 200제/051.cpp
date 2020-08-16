//051
//��¥�� �ð��� ���ڿ��� ��ȯ�ϱ�(localtime)
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	//��¥�� �ð��� ���� �� �ִ� time_t ������ ����. NULL�� �ƹ��͵� ���� ���� �ʴٴ� ���̴�.(����ִ�)
	time_t now = time(NULL);
	//tm�� ����ü�� localtime()�Լ��� �̿��� int ��¥�� �ð� ���� �����Ѵ�.
	tm* ptm = localtime(&now);

	char buffer[64];
	//strftime�� 3��? ������ ���ڿ��� 2��° ������ ũ��(64)��ŭ 1��? �迭(buffer)�� �Ҵ��ϴ� ������ ����Ѵ�.
	strftime(buffer, 64, "������ %Y�� %m�� %d��, %H�� %M�� %S���Դϴ�.(%p)\n", ptm);

	cout << buffer;

	return 0;
}

/*
�Ϲ������� ��¥�� ���� �� ctime()�Լ��� �ַ� �̿��ߴ�.
���⿡ ���� strftime�� time_t�� �̿��Ͽ� ��¥ �ٷ�� ����� �˾ƺ���.
*/

/*
[tm ����ü ����]
int tm_sec;   // seconds after the minute - [0, 60] including leap second
int tm_min;   // minutes after the hour - [0, 59]
int tm_hour;  // hours since midnight - [0, 23]
int tm_mday;  // day of the month - [1, 31]
int tm_mon;   // months since January - [0, 11]
int tm_year;  // years since 1900
int tm_wday;  // days since Sunday - [0, 6]
int tm_yday;  // days since January 1 - [0, 365]
int tm_isdst; // daylight savings time flag
*/