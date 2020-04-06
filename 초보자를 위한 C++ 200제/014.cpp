//014
//#include 배우기

// #include <...>  C++에서 제공하는 기본 라이브러리를 사용한다.
// #include "..."  사용자가 만든 다른 파일을 참조할 때 사용한다.
#include <iostream>
#include <vector> //vector는 사용방법이 많고 유용하여 자주 사용되는 컨테이너이다.

using namespace std;

int main() {
	//정수형 데이터를 저장하는 벡터 선언
	vector<int> exam;

	//백터의 뒤에 순차적으로 10,20,30을 삽입한다.
	exam.push_back(10);
	exam.push_back(20);
	exam.push_back(30);

	//백터의 값을 모두 출력한다
	for (int i = 0, size = exam.size(); i < size; i++) {
		cout << "백터 값: " << exam.at(i) << endl;
	}

	return 0;
}

/*
구현과정이 복잡하거나 시간이 오래 걸린다면 이미 검증된 외부 라이브러리를 찾아 적용하는게 좋다.

C++는 검증된 소스들을 한데 모아 파일로 제공하고 있다.
이 파일 안에는 수많은 소스 코드가 존재하며, 이곳에서 내가 필요한 부분을 사용할 수 있다.
*/