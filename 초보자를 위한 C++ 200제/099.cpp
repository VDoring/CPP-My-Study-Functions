//099
//하위 폴더 목록 확인하기(directory_iterator)
#include <iostream>
#include <filesystem>
#include <string>

using namespace std;
namespace fs = experimental::filesystem;

int main()
{
	string directory = "C:\\Program Files"; //조회할 폴더 이름을 변수에 설정한다. \\는 경로를 나타내기 위해 사용한다.

	//자료형 auto는 자료형을 미리 정해놓지 않고 컴파일 단계에서 정해주는 것이다. 자료형이 명확하지 않거나 크기가 일정하지 않을떄 사용하면 좋지만 남발하면 자료형 유치가 되지않아 유지보수가 힘들어진다.
	//filesystem헤더의 directory_iterator 함수를 호출한다. 이 함수는 인자로 받는 디렉토리의 처음과 끝을 조회하여 결과를 알려준다.
	//directory_iterator의 리턴값이 auto 자료형 name에 대입되고, 이 내용을 출력하는 것이다.
	for (auto& name : fs::directory_iterator(directory))
		cout << name << '\n';

	return 0;
}