//010
//배열 배우기([크기])
#include <iostream>
using namespace std;

int main() {
	const int kArraySize = 3;

	//배열에는 같은 자료형데이터를 여러 개 담을 수 있다.
	//코드가 길어지고 프로젝트 규모가 커질때 효율적으로 사용할 수 있다.
	//비슷한 유형의 데이터는 배열에 담아 꺼내쓰는게 합리적이다.
	int founding[kArraySize];
	founding[0] = 918;
	founding[1] = 1392;
	founding[2] = 1948;

	cout << "고려 건국 연도 : " << founding[0] << endl;
	cout << "조선 건국 연도 : " << founding[1] << endl;
	cout << "한국 건국 연도 : " << founding[2] << endl;

	return 0;
}

/*
최근에는 vector, list, tuple같은 컨테이너로 인해 사용빈도가 줄어들고 있다.
컨테이너가 갖고 있는 편의성때문에 배열보다 컨테이너를 사용하는게 생산성 향상에도 좋다.
하지만, 아직도 배열이 팔요한 부분이 많고, 컨테이너가 갖는 메모리 점유율 등의 문제도 있어 배열과 컨테이너를 적절히 사용하는 운용의 묘가 필요하다.
*/
