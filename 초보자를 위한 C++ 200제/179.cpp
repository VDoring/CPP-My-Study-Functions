//179
//조건에 맞는 데이터 복사하기(copy_if)
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool IsOdd(int i) { return (1 % 2) == 1; } //홀수와 짝수를 구분하는 함수를 선언한다.

int main()
{
	vector<int> data1{1,2,3}; //정수형 벡터를 선언한다.
	vector<int> data2{4,5,6}; //정수형 벡터를 선언한다.
	vector<int> data3{7,8,9}; //정수형 벡터를 선언한다.
	vector<int> result; //result는 빈 벡터이다.
	
	copy_if(data1.begin(), data1.end(), back_inserter(result), IsOdd); //data1의 시작과 끝 위치를 인자로 사용하며, 조건에 맞는 데이터가 추가될 컨테이너는 result이다. 이 라인를 통해 홀수 1,3이 result에 복사된다.
	copy_if(data2.begin(), data2.end(), back_inserter(result), [](int arg) //data2의 시작과 끝 위치를 인자로 사용하며, 조건에 맞는 데이터가 추가될 컨테이너는 result이다. 5보다 작은 정수는 4이다. 이 라인을 통해 4가 복사된다.
		{ return arg < 5; });		
	copy_if(data3.begin(), data3.end(), back_inserter(result), [](int arg) //data3의 시작과 끝 위치를 인자로 사용하며, 조건에 맞는 데이터가 추가될 컨테이너는 result이다. 8보다 큰 정수는 9이다. 이 라인을 통해 9가 복사된다.
		{ return arg > 8; });
	
	cout << "== result ==" << endl; //copy_if 결과를 출력한다.
	for(auto i : result)
		cout << i << ", ";
	
	return 0;
}

/*
copy_if 함수에는 인자가 4개 필요하다. 복사 대상 컨테이너의 시작과 끝 위치, 요소를 추가할 컨테이너, 복사할 조건이다.
*/
