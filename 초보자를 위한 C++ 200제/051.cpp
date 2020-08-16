//051
//날짜와 시간을 문자열로 변환하기(localtime)
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	//날짜의 시간을 얻을 수 있는 time_t 변수를 선언. NULL은 아무것도 갖고 있지 않다는 뜻이다.(비어있다)
	time_t now = time(NULL);
	//tm은 구조체로 localtime()함수를 이용해 int 날짜와 시간 값을 대입한다.
	tm* ptm = localtime(&now);

	char buffer[64];
	//strftime은 3번? 인자의 문자열을 2번째 인자의 크기(64)만큼 1번? 배열(buffer)에 할당하는 역할을 담당한다.
	strftime(buffer, 64, "지금은 %Y년 %m월 %d일, %H시 %M분 %S초입니다.(%p)\n", ptm);

	cout << buffer;

	return 0;
}

/*
일반적으로 날짜를 구할 때 ctime()함수를 주로 이용했다.
여기에 더해 strftime과 time_t를 이용하여 날짜 다루는 방법을 알아보자.
*/

/*
[tm 구조체 구성]
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