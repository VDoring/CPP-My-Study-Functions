//082
//1차원 배열 사용하기
#include <iostream>

using namespace std;

int main()
{
	int data1[3] = { 0,1,2 }; //[0] = 0, [1] = 1, [2] = 2 로 초기화

	data1[0] += 10; //10 더함
	data1[1] = 100; //100으로 변경
	data1[2] -= 2; //2를 뺌

	cout << "== data1 ==" << endl;
	for (int i = 0; i < 3; i++)
		cout << "data1[" << i << "] = " << data1[i] << endl;

	return 0;
}