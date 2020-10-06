//173
//정렬되어 있는지 확인하기(is_sorted)
#include <iostream>
#include <algorithm>
#include <list>
#include <string>

using namespace std;

int main()
{
	list<int> data1 = { 5,3,1,7,9 }; //정수형 벡터 선언
	list<string> data2 = { "ef", "ab", "cd", "ij", "gh" }; //문자열형 벡터 선언

	cout << boolalpha; //함수 실행 결과를 true, false로 표현하도록 설정한다.
	cout << "data1 sort : " << is_sorted(data1.begin(), data1.end()) << endl; //함수 is_sorted를 호출하여 인자로는 data1의 시작 위치와 마지막 위치를 사용한다. 만약 data1이 오름차순으로 정렬된 상태라면 true, 아니라면 false가 리턴된다. 결과는 false이다.
	cout << "data2 sort : " << is_sorted(data2.begin(), data2.end()) << endl; //함수 is_sorted를 호출하여 인자로는 data2의 시작 위치와 마지막 위치를 사용한다. 컨테이너 전체가 아니라 일부 영역을 이용할 수도 있다. 결과는 false이다.

	data1.sort(); //list data1과 data2의 sort 함수를 호출하여 오름차순으로 정렬한다.
	data2.sort();

	cout << "data1 sort : " << is_sorted(data1.begin(), data1.end()) << endl; //리스트를 정렬한 뒤 is_sorted 함수를 다시 사용해 보자. 경과는 모두 true이다.
	cout << "data2 sort : " << is_sorted(data2.begin(), data2.end()) << endl;

	cout << "== data1 ==" << endl; //정렬된 리스트를 출력한다.
	for (auto i : data1)
		cout << i << ", ";

	cout << endl << "== data2 ==" << endl;
	for (auto i : data2)
		cout << i << ", ";

	return 0;
}

/*
컨테이너가 오름차순으로 정렬되어 있다면 is_sorted 함수는 true를 리턴한다.
컨테이너의 sort 함수는 오름차순으로 정렬하기 때문에 sort 함수가 정상적으로 동작한다면 이후 해당 컨테이너의 is_sorted 함수는 true를 리턴하게 된다.
*/