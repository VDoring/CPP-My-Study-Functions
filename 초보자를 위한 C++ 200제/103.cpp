//103
//파일 크기 확인하기(file_size)
#include <iostream>
#include <filesystem>

using namespace std;
namespace fs = experimental::filesystem;

int main()
{
	int size = fs::file_size("103.txt"); //file_size 함수를 사용한다. 인자는 파일의 경로이다. 만약 전체 경로를 입력하지 않는다면 해당 프로젝트 폴더의 파일을 열게 된다.

	cout << "파일 크기 : " << size << "바이트" << endl;

	return 0;
}