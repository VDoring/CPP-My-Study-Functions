//100
//폴더 생성, 복사, 삭제하기(filesystem)
#include <iostream>
#include <fstream>
#include <filesystem>

using namespace std;
namespace fs = experimental::filesystem; //filesystem 네임스페이스를 포함하는 experimental을 fs란 새로운 이름으로 정의한다.

int main()
{
	fs::create_directory("temp"); //temp라는 이름의 폴더를 생성한다. 별도의 경로를 지정하지 않을 경우 프로젝트 폴더에 temp폴더가 생성된다.
	fs::copy("temp", "temp_copy"); //temp폴더를 temp_copy란 폴더로 복사한다. 별도의 경로를 지정하지 않을 경우 프로젝트 폴더에 temp_copy폴더가 생성된다.
	fs::remove("temp"); //temp폴더를 삭제한다.
	fs::remove("temp_copy"); //temp_copy폴더를 삭제한다.

	return 0;
}