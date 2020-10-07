//180
//원하는 개수만큼 복사하기(copy_n)
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int data[] = {1,2,3,4,5,6,7,8,9,10}; //정수형 배열 선언
	vector<int> result; //정수형 벡터 선언
	
	copy_n(data, 5, back_inserter(result)); //copy_n 함수의 첫 번째 인자 data가 복사할 대상이며, 두 번쨰 인자 5는 data 데이터 중 총 5개를 뜻한다. 세 번째 인자는 result 벡터로 이것이 복사할 대상이다.
	
	cout << "== result ==" << endl; //copy_n 결과를 출력한다.
	for(auto i : result)
		cout << i << ", "; //결과는 1,2,3,4,5 이다.
	
	return 0;
}

/*
전체가 아닌 일부 배열만 복사할 때, copy_n 함수를 사용한다.
copy_n 함수는 3개의 인자를 사용하는데, 첫 번째는 복사할 대상, 두 번째는 원하는 개수, 세 번째는 복사될 배열이다.
*/
