//174
//요소의 범위 비교하기(is_permutation)
#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

int main()
{
	array<int, 5> data1 = { 5,3,1,7,9 }; //정수형 array를 3개 선언한다. data1과 data2는 정렬되지 않았지만 내부 요소는 각기 1,3,5,7,9로 똑같다.
	array<int, 5> data2 = { 1,3,5,7,9 };
	array<int, 7> data3 = { 2,2,1,3,5,7,9 }; //data3은 1,3,5,7,9를 포함하여 추가로 정수 2를 두 개 더 보유한다. data3의 크기는 7로서 data1, data2보다 더 크다.

	cout << boolalpha;
	cout << "data1 == data2 : " << //is_permutation 함수에 data1의 시작과 끝 위치 그리고 data2의 시작 위치를 인자로 넘긴다. data1의 모든 요소를 data2의 시작 위치부터 비교한다. 비록 인덱스마다 값은 다르지만 개별 데이터는 모두 똑같기 때문에 결과는 true이다.
		is_permutation(data1.begin(), data1.end(), data2.begin()) << endl;

	cout << "data1 == data3 : " << //is_permutation 함수에 data1의 시작과 끝 위치 그리고 data3의 시작 위치를 인자로 넘긴다. data1의 모든 요소를 data3의 시작 위치부터 비교한다. data1에서는 정수 2가 없으므로 결과는 false이다.
		is_permutation(data1.begin(), data1.end(), data3.begin()) << endl;

	cout << "data1 == data2 (+2) : " << //is_permutation 함수에 data1의 시작과 끝 위치, 그리고 data3의 3번째 위치를 인자로 넘긴다. begin은 인덱스 0, begin + 1은 인덱스 1, begin + 2는 인덱스 2이다. begin + 2는 즉, 세 번쨰 데이터를 가리킨다. data1의 모든 요소를 data3의 3번쨰 위치부터 비교한다. data1이 보유한 데이터 1,3,5,7,9가 data3의 세 번쨰 위치인 1부터 마지막 9까지와 똑같다. 결과는 true이다.
		is_permutation(data1.begin(), data1.end(), data3.begin() + 2) << endl;

	return 0;
}

/*
is_permutation 함수는 정렬되지 않은 두 컨테이너의 요소(또는 일부 영역)를 비교한다. 지정한 요소의 범위가 모두 똑같다면 true, 그렇지 않다면 false가 리턴된다.
*/