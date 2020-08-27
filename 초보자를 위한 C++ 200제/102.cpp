//102
//파일 존재 여부 확인하기(good)
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream stream; //ifstream 객체 생성
	stream.open("C:\\BOOTNXT"); //파일 오픈

	//만약 open 함수에 인자로 사용된 파일 경로가 옳다면 ifstream은 정상적으로 파일이 열린다. 반환값은 true.
	//하지만 파일이 존재하지 않다면 파일 오픈 과정에서 내부 오류가 발생했을 것이다. 반환값은 false.
	if (stream.good() == true)
		cout << "파일이 존재합니다" << endl;
	else
		cout << "파일이 존재하지 않습니다" << endl;

	stream.close(); //파일을 사용 후에는 close함수를 호출해 종료한다.

	return 0;
}