//177
//조건에 맞춰 영역을 분할하기(partition, partition_point)
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool IsOdd(int i) { return (1 % 2) == 1; } //홀수와 짝수를 구분하는 함수를 선언한다.

int main()
{
	vector<int> data1{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15}; //정수형 벡터를 선언한다.
	vector<int> data2; //정수형 벡터를 선언한다.
	
	partition(data1.begin(), data1.end(), IsOdd); //partition 함수에 인자로 data1의 시작과 끝 위치를 넘기고 분리 조건으로 IsOdd 함수를 설정한다. 이 과정이 이루어지면 컨테이너 내부의 요소들은 true, false 영역을 기준으로 주소가 변경된다.
	
	auto result = partition_point(data1.begin(), data1.end(), IsOdd); //partition으로 분리된 컨테이너의 위치값을 얻어온다. partition의 분리 조건에 합당하는 결과를 얻어오려면 partition_point도 partition함수와 같은 조건을 인자로 사용해야 한다. 만약 partition_point가 다른 조건을 이용한다면 리턴값은 없다. 반드시 같은 조건을 사용해야 한다.
	
	data2.assign(data1.begin(), result); //partition 결과를 반 컨테이너 data2에 삽입한다.
	
	for(int x : data2) //data2의 결과를 출력한다.
		cout << x << ", ";
	
	return 0;
}

/*
특정 컨테이너 요소를 원하는 조건으로 분리할 수 있다.
가령, 정수를 홀수와 짝수로 분리하고 싶다면, 새로운 컨테이너나 새로운 함수를 따로 구현하지 않고 partition 함수를 이용한다.

partition 함수는 분리할 컨테이너 영역의 시작, 큰 위치를 인자로 받는다.
그리고 분리할 조건까지 세 가지를 받는데, 해당 조건에 합당한 위치를 찾으면 순회 방향이 거꾸로 바뀐다.
즉, 처음부터 순회하다 맞는 조건이 나오면 맨 뒤에서 순회한다.
그리고 맞는 조건이 나오면 다시 앞으로 돌아가 순회한다.
이렇게 순회가 끝나면 true 영역은 컨테이너의 앞쪽, false 영역은 뒤쪽으로 분리된다.

그리고 partition_point는 partition이 이뤄진 컨테이너의 위치만 참조한다.
그렇기 때문에 partition이 이루어지지 않은 컨테이너에 사용할 수 없다.
*/
