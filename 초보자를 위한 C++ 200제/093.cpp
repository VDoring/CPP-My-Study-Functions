//093
//파일을 한 글자씩 읽기(ifstream, get)
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream read; //ifstream을 이용해 예제 파일을 오픈한다.

	read.open("093.txt", ifstream::in); //ifstream::in은 열기 모드란 의미이다.

	char line = read.get(); //파일의 첫 문자 한 개를 읽는다.

	while (read.eof() == false) //eof는 End Of File의 약자이다. 피일을 끝까지 읽지 않았다면 while문은 계속 반복된다는 의미이다.
	{
		cout << line; //한 문자씩 출력

		line = read.get();
	}

	cout << endl;

	read.close(); //파일을 다 읽었다면 close 함수를 이용해 오픈했던 파일을 닫는다.
	              //만약 파일을 닫지 않는다면 해당 파일은 다른 프로세스가 점유한 상태가 유지되기 떄문에 변도로 파일을 열어 수정할 수 없다.

	return 0;
}