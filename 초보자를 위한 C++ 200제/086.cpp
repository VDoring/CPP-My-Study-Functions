//086
//배열 일부 변경하기(fill)
#include <iostream>
#include <vector>
#include <algorithm> //fill()을 사용하기 위해 include

using namespace std;

int main()
{
	int data1[10]{ 0, }; //1차원배열을 0으로 초기화

	//fill 함수는 첫 번째 인자로 수정할 배열 영역의 시작 위치, 두 번쨰 인자로 마지막 위치를 받는다. 세번쨰 인자는 수정할 값이다.
	fill(data1, data1 + 3, 10); //data1[0], data1[1], data1[2]를 10으로 변경한다.
	fill(data1 + 4, data1 + 8, 20); //수정할 배열 영역이 인덱스 4~7로 설정되었으며, 이 영역엔 모두 20이 할당된다.

	cout << "== data1 결과==" << endl;

	for (int i = 0; i < 10; i++) //data1의 모든 값을 출력.
		cout << data1[i] << ",";

	vector<int> data2({ 0,1,2,3,4,5,6,7 }); //정수형 벡터를 선언하고 0~7로 초기화한다.
	fill(data2.begin(), data2.begin() + 3, 30); //fill 함수는 일반 배열과 컨테이너를 인자로 받는다. 수정할 영역을 0~2로 설정하고 해당 영역을 30으로 변경한다.

	cout << endl << endl << "== data2 결과" << endl;

	int size = data2.size();
	for (int i = 0; i < size; i++) //data2의 모든 값을 출력.
		cout << data2.at(i) << ", ";

	return 0;
}

/*
배열 선언과 함께 특정 값으로 배열 전체를 추가할 수 있다.
그리고 배열 일부 영역을 특정 값으로 변경한 수 있다.
*/