//150
//tuple 사용하기(비교연산)
#include "stdafx.h" //(따로 추가해야합니다)
#include <iostream>
#include <tuple>
#include <string>

using namespace std;

int main()
{
	//같은 형태의 튜플 2개를 선언한다.
	tuple<int, string> data1(1, "def");
	tuple<int, string> data2(1, "abc");

	if (data1 > data2) //두 튜플 크기를 비교하는데 첫 번쨰 요소는 정수 1로 똑같다. 하지만 두 번쨰 요소는 알파벳 순서 상 def가 더 크기 때문에 data1이 더 크다고 할 수 있다.
		cout << "data1 > data2" << endl;
	else
		cout << "data1 < data2" << endl;

	tuple<double, string> data3(1.0, "def");
	tuple<double, string, int> data4(2.0, "abc", 3);

	//if (data3 == data4)
	//	cout << "data1 > data2" << endl;
	//else
	//	cout << "data1 < data2" << endl;

	return 0;
}

/*
튜플을 비교할 때 기본 연산자를 이용할 수 있다.

튜플은 같은 형태끼리 비교할 수 있으며 만약 형태가 다른 튜플을 비교하려 하면 에러가 발생한다.
(튜플 크기가 다르기 떄문에 비교할 수 없다는 에러 메세지가 출력)

data3와 data4는 크기가 다르기 떄문에 주석을 제거하면 에러 메세지가 출력된다.
*/

/*
프로그램 결과는 data1 > data2 이다.
*/