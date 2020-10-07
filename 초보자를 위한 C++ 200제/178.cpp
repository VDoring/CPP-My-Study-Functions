//178
//분할한 영역 저장하기(partition_copy)
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool IsOdd(int i) { return (1 % 2) == 1; } //홀수와 짝수를 구분하는 함수를 선언한다.

int main()
{
	vector<int> data1{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15}; //정수형 벡터를 선언한다.
	vector<int> odd; //정수형 벡터를 선언한다.
	vector<int> even; //정수형 벡터를 선언한다.
	
	partition_copy(data1.begin(), data1.end(), back_inserter(odd), back_inserter(even), IsOdd); //partition_copy에 분리할 컨테이너 data1의 시작과 끝 위치를 인자로 사용한다. 5번째 함수는 분리 조건인데, 이 조건에 부합한다면 세 번쨰 컨테이너에 요소가 추가되고, 부합하지 않는다면 내 번쨰 컨테이너에 요소가 추가된다. back_inserter함수는 크기를 지정할 수 없는 상황에서 컨테이너의 맨 뒤에 요소를 추가할 때 유용하게 사용할 수 있다.
	
	cout << "== 홀수 ==" << endl; //partition_copy 결과를 출력한다.
	for(int x : odd)
		cout << x << ", ";
	
	cout << endl << "== 짝수 ==" << endl;
	for(int x : even)
		cout << x << ", ";
	
	return 0;
}

/*
partition 기능을 더 편리하게 사용할 수 있는 함수 partition_copy이다.

이 함수를 사용하면 결과를 컨테이너에 바로 저장할 수 있다.
따라서 partition함수를 단독으로 사용하는 것 보단, 되도록 partition_copy를 사용하는 것이 좋다.
*/
