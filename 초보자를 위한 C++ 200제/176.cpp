//176
//반복자 iterator 거리 구하기(distance) 
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> data{5,9,7,4,3,8,6}; //정수형 벡터 선언, 5,9,7,4,3,8,6으로 초기화 
	cout << "distance1 : " << distance(data.begin(), data.end()) << endl; //벡터의 시작과 끝 위치를 인자로 전달하면 둘 사이의 거리를 알 수 있다. 벡터 data를 기준으로 시작 위치는 0이고 마지막 위치는 6이다. 0을 첫 번째 이동 위치라 설정하고 6번 이동하면 총 7번의 이동 휫수가 구해진다. 
	
	vector<int>::iterator end_it = data.end() - 1; //iterator end_if 위치를 마지막 9가 아닌 바로 앞의 8로 설정하여 비교한다.
	cout << "distance2 : " << distance(data.begin(), end_it) << endl;
	
	vector<int>::iterator max_it = max_element(data.begin(), data.end()); //max_element, min_element로 최대, 최소 값을 구한 뒤 시작 위치에서 거리를 알아낸다. 최대값은 9이며 시작 위치에서 한 번 이동해 도달하는 위치이다. 최소값은 3이며, 시작 위치에서 4번 이동해 도달하는 위치이다. 
	cout << "distance3 : " << distance(data.begin(), max_it) << endl;
	
	vector<int>::iterator min_it = min_element(data.begin(), data.end());
	cout << "distance4 : " << distance(data.begin(), min_it) << endl;
	
	cout << "distance5 : " << distance(max_it, min_it) << endl; //최대값 9에서 최소값 3까지의 거리는 3이다. 9의 인덱스는 1이고 3의 인덱스는 4로 인덱스 1과 4의 차이는 3이라 결과 값도 3이다. 
	
	return 0;
}

/*
무언가 이상하지 않은가?

연산결과 첫 번째, 두 번째와 나머지 사이에 1차이가 존재한다.
단순히 begin, end를 인자로 이용할 땐 함수 내부에서 전위 연산자를 사용해 결과를 반환한다.
하지만, 어떤 연산의 결과로 얻어진 iterator를 인자로 사용할 땐 둘 사이의 차이만 반환한다.
인자 종류에 따라 거리를 구하는 방식이 달라서 1 차이가 발생하는 것이다. 
*/
