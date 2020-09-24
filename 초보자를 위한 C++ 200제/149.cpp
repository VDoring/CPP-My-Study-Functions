//149
//tuple 사용하기(sizeof)
#include <iostream>
#include <tuple>
#include <string>

using namespace std;

int main()
{
	//각기 다른 형태의 튜플 3개를 선언한다. 각 튜플의 크기를 출력하는데 결과는 4,16,24이다.
	tuple<int> data1(1); //가장 큰 자료형은 int 4바이트. 4 * 1 = 4
	tuple<int, double> data2(1, 2.3); //가장 큰 자료형은 double 8바이트. 8 * 2 = 16
	tuple<int, double, char> data3(1, 2.3, 'a'); //가장 큰 자료형은 double 8바이트. 8 * 3 = 24

	cout << sizeof(data1) << ", " << sizeof(data2) << ", " << sizeof(data3) << endl;

	return 0;
}

/*
튜플 크기 계산 방법)
가장 큰 자료형 * 인자 개수 = 튜플 크기

튜플의 크기를 계산할 땐 가장 큰 자료형이 최소 바이트를 따른다.
*/