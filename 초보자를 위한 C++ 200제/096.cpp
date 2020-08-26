//096
//텍스트를 파일에 쓰기(ofstream)
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	const string file_name = "096.txt";

	ofstream file_out; //ofstream으로 파일을 여는데 이 시점에 파일이 없다면 새로 생성한다. 만약 파일이 존재하면 기존 내용은 삭제하고 새롭게 파일에 텍스트를 기록한다.
	file_out.open(file_name, ifstream::out); //ifstream::out은 쓰기 모드를 의미한다

	//해당 파일에 원하는 내요을 입력한다.
	file_out << "고구려 유리왕과 황조가" << endl;
	file_out << "사랑의 아픔을 승화한 시" << endl;

	//(이후의 내용은 이전 예제 참조)
	file_out.close();

	ifstream file_in;
	file_in.open(file_name, ifstream::in);

	string line;

	while (getline(file_in, line))
		cout << line << endl;

	file_in.close();

	return 0;
}