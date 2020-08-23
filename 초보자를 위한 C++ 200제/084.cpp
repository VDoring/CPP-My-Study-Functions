//084
//2차원 배열 사용하기
#include <iostream>

using namespace std;

int main()
{
	int data1[2][2] = { 1,2,3 }; //1,2,3,0으로 초기화
	int data2[2][3] = { {1,} }; //1,0,0,0,0,0으로 초기화

	cout << "data1[0][0] = " << data1[0][0] << endl;
	cout << "data1[0][1] = " << data1[0][1] << endl;
	cout << "data1[1][0] = " << data1[1][0] << endl;
	cout << "data1[1][1] = " << data1[1][1] << endl;

	cout << endl;
	cout << "data2[0][0] = " << data2[0][0] << endl;
	cout << "data2[0][1] = " << data2[0][1] + 1 << endl;
	cout << "data2[0][2] = " << data2[0][2] + 2 << endl;
	cout << "data2[1][0] = " << data2[1][0] + 3 << endl;
	cout << "data2[1][1] = " << data2[1][1] + 4 << endl;
	cout << "data2[1][2] = " << data2[1][2] + 5 << endl;

	return 0;
}

/*
2차원 배열은 각괄호 2개를 겹쳐서 사용한다.
[2][4]는 2행 4열. 행마다 4개의 데이터가 존재.
*/