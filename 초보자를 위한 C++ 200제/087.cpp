//087
//배열 일부 변경하기(fill_n)
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int data1[10]{ 0, }; //1차원 배열 선언, 0으로 초기화
	fill_n(data1, 2, 10); //fill_n 함수는 두번쨰 인자로 수정할 개수를 받는다. 개수 인자로 2를 넘겼기 때문에 data1[0], data1[1] 두 개의 데이터는 10으로 변경된다.
	fill_n(data1 + 4, 3, 20); //수정할 배열 영역이 인덱스 4~6으로 설정되었으며 이 영역엔 모두 20이 할당된다.

	cout << "== data1 결과 ==" << endl;

	for (int i = 0; i < 10; i++) //data1의 모든 값을 출력한다.
		cout << data1[i] << ", ";

	vector<int> data2({ 0,1,2,3,4,5,6,7 }); //정수형 백터를 선언하고 0~7로 초기화한다.
	fill_n(data2.begin(), data2.size() - 1, 30); //수정할 영역을 0~6으로 설정하고 해당 영역은 30으로 변경한다. data2의 사이즈는 8이고 두번째 인자로 사용할 때 1을 빼주기 떄문에 실제 사용된 값은 7이다.
	fill_n(data2.begin(), 4, 40); //수정할 영역을 0~3으로 설정하고 해당 영역은 40으로 변경한다.

	cout << endl << endl << "== data2 결과 ==" << endl;

	int size = data2.size();
	for (int i = 0; i < size; i++) //data2의 모든 값을 출력한다.
		cout << data2.at(i) << ", ";

	return 0;

}

/*
fill_n은 fill처럼 사용할 수 있지만, 2번쨰 인자를 종료 위치가 아닌 개수로 받는다.
*/