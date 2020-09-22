//148
//tuple 사용하기(cat)
#include <iostream>
#include <tuple>
#include <string>

using namespace std;

int main()
{
	tuple<int, double> data1(1, 2.1); //tuple 두 개를 선언하는데 int, double형과
	tuple<double, string> data2(3.4, "문자열1"); //double, string형이다.

	auto data3 = tuple_cat(data1, data2); //auto 키워드를 이용해 타입을 유추하며 tuple_cat 함수를 이용해 새로운 튜플을 생성한다.
	                                      //tuple_cat 함수에 data1과 data2를 인자로 전달한다.
	                                      //새로 생성된 튜플은 <int, double, double, string>형태가 된다. auto는 컴파일 타임에 tuple<int, double, double, string>이 된다.

	cout << get<0>(data3) << ", " << get<1>(data3) << ", " << get<2>(data3) << ", " << get<3>(data3) << endl; //get을 이용해 출력한다. 결과는 1, 2.1, 3.4, 문자열 1 이다.

	return 0;
}