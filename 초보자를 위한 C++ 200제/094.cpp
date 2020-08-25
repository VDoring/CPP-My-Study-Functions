//094
//파일을 한 줄씩 읽기(ifstream, getline)
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream file; //파일 오픈
	file.open("093.txt", ifstream::in); //열기 모드

	string line;

	while (getline(file, line)) //getline함수를 이용하여 한 줄씩 읽어 line 변수에 저장한다. 한줄씩 읽다가 더 읽을수 없게되면 while문은 종료된다.
		cout << line << endl; //변수에 저장된 파일 내용을 출력한다.

	file.close();

	return 0;
}