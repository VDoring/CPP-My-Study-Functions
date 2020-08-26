//098
//폴더 존재 여부 확인하기(exists)
#include <iostream>
#include <filesystem>

using namespace std;
namespace fs = experimental::filesystem;

int main()
{
	//filesystem 네임스페이스를 이용해 fs선언, exists 함수를 호출한다.
	//폴더 존재시 true, 아닐시 false가 반환된다.
	//같은 방식으로 파일의 존재 여부도 확인할 수 있다.
	if (fs::exists("c:\\target") == true)
		cout << "폴더가 존재합니다" << endl;
	else
		cout << "폴더가 없습니다" << endl;

	return 0;
}

/*
존재 여부를 확인하는 exists함수는 C#, Qt 등에서도 같은 이름으로 존재한다.
*/