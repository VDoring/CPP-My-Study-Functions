//145
//pair 사용하기
#include <iostream>
#include <string>

using namespace std;

int main()
{
	pair<string, int> data("백제 근초고왕", 13); //pair에서 저장할 자료형 두개를 설정하고 초기값을 대입한다. pair는 딱 두개의 자료형만 담을 수 있다.

	cout << data.first << " " << data.second << "대왕" << endl; //pair의 첫번째 데이터는 first로 가져오고, 두번쨰 데이터는 second로 가져온다.
	                                                            //위 라인(10번 라인)에서 string, int로 설정했기 때문에 첫 번쨰 데이터는 string, 두 번쨰 데이터는 int가 된다.

	return 0;
}

/*
두개의 자료형을 하나의 컨테이너에서 처리할 수 있도록 돕는 것이 pair이다.
pair는 std에 정의되어 있어 별도의 include가 필요하지 않다.
2차원 배열, x y 좌표 등 한 쌍으로 이루어진 데이터를 저장하는 용도로 사용할 수 있다.
*/