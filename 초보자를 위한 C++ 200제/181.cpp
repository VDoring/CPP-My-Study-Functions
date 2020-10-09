//181
//두 영역의 차집합 구하기 (set_difference)
#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
	vector<int> data1 = {1,3,5,7,9}; //정수형 벡터 선언
	vector<int> data2 = {2,4,6,7,9}; //정수형 벡터 선언
	vector<int> diff1; //차집합을 저장할 벡터 선언
	vector<int> diff2; //차집합을 저장할 벡터 선언
	
	set_difference(data1.begin(), data1.end(), //첫 번째에서 네 번째 인자는 비교할 컨테이너와 시작과 종료 위치이다. 5번째 인자는 차집합을 저장할 새로운 컨테이너이다. diff1.begin이란 diff1 컨테이너의 맨 앞부터 차집합을 추가한다는 의미이다.
		data2.begin(), data2.end(),
		inserter(diff1, diff1.begin()));
		
	set_difference(data1.begin() + 2, data1.end(), //17~19라인과 거의 비슷하지만, 비교 시작 위치를 인덱스 2번부터 시작한다. 인덱스 2번은 data1의 5, data2의 6을 가리킨다. 그리고 차집합을 diff2의 끝 위치에 추가한다. 컨테이너의 절반만 비교하고 결과를 diff2의 끝에 추가한다는 차이점이 존재한다.
		data2.begin() + 2, data2.end(),
		inserter(diff2, diff2.end()));
		
	cout << "== diff1 ==" << endl; //차집합 수행 결과 출력
	for(auto i : diff1)
		cout << i << ", ";
	
	cout << endl << "== diff2 ==" << endl;
	for(auto i : diff2)
		cout << i << ", ";
	
	return 0;
}
