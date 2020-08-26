//097
//프로그램 실행 폴더 알아내기(current_path)
#include <iostream>
#include <filesystem>

using namespace std;
namespace fs = experimental::filesystem; //특정 함수를 특정 네임스페이스에 종속시키면, 해당 함수는 해당 네임스페이스의 집합으로 존재한다.
                                         //이 라인에서는 네임스페이스 fs를 experimental::filesystem으로 특정해서 지정한 예이다.
                                         //이렇게 네임스페이스를 별도로 분리하지 않으면 14번 라인에서 사용할 current_path때문에 긴 코드를 매번 삽입해야 한다.
                                         //5번 라인처럼 네임스페이스를 별도로 선언하여 14번 라인처럼 축약해 사용하는 것이 효율적이다.

int main()
{
	cout << "프로젝트 폴더 : " << fs::current_path() << endl; //현재 작업중인 폴더를 출력한다. 비주얼 스튜디오일떈 빌드한 실행파일(.exe)가 기준이다.

	return 0;
}