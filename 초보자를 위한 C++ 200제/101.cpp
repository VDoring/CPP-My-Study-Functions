//101
//파일 복사, 삭제하기(copy, remove)
#include <iostream>
#include <filesystem>
#include <string>

using namespace std;
namespace fs = experimental::filesystem;

int main()
{
	//copy 함수를 호출한다.
	//이 함수의 인자는 (복사할 파일 이름, 복사된 파일이 갖게 될 이름) 이다.
	//만약 복사된 파일의 이름이 똑같다면 예외처리가 되지 않는다는 에러가 발생한다. 하지만 경로가 다르다면 발생하지 않는다.
	fs::copy("101.txt", "101_copy.txt");

	//remove 함수는 삭제할 파일 이름을 인자로 사용한다.
	//전달받은 인자와 똑같은 경로와 이름의 파일을 삭제한다.
	fs::remove("101.txt");

	return 0;
}

/*
이 예제는 101.txt라는 파일의 복사본을 만든 뒤, 원본 파일을 삭제한다.

만약 파일이 (이 예제처럼)해당 프로젝트 폴더에 있는 것이 아니라면 전체 경로를 입력해야한다.
*/