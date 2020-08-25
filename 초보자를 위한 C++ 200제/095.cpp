//095
//파일 내용을 모두 읽기(stringstream)
#include <iostream>
#include <sstream> //stringstream을 사용하기 위해 include
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream ifs("095.txt"); //ifstream을 이용해 텍스트 파일을 연다. 파일 모드를 생략하면 ifstream::in으로 설정된다.

	stringstream ss; //stringstream을 선언.

	ss << ifs.rdbuf(); //ifstream으로 열은 파일의 전체 텍스트 내용을 stringstream에 저장한다.
	ifs.close(); //파일 열기를 끝낸다.

	string read = "";

	cout << "== !ss.eof ==" << endl;

	//ss의 텍스트를 끝까지 읽지 않았다면 while안 코드가 반복 수행된다.
	//ss에 저장된 문자열을 순차적으로 read 문자열 변수에 저장하고 출력한다.
	//ss에서 read로 전달하는 문자열은 ifs를 통해 읽은 텍스트 문서의 내용으로, 연속된 문자열을 한 단위로 저장한다.
	//띄어쓰기, 특수문자 등을 만나기 전까지의 텍스트를 한 단위로 처리한다. 그 단위를 순차적으로 read변수에 저장한 뒤 출력하는 것이다.
	while (!ss.eof())
	{
		ss >> read;
		cout << read << " ";
	}

	cout << endl << "== !ss.str() ==" << endl;
	read = ss.str(); //텍스트 내용을 출력하는 다른 방법으로 stringstream의 모든 데이터를 문자열로 변환하여 string변수에 담을 수 있다. 이 변수를 그대로 출력하면 텍스트 문서 내용이 모두 출력된다.

	cout << endl << read << endl;

	return 0;
}