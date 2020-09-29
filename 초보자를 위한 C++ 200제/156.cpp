//156
//list 삽입, 정렬, 중복 값 제거하기(sort, unique, merge)
#include <iostream>
#include <list> //list를 사용하기 위해 include

using namespace std;

void Print(const list<int> &data) //list를 인자로 받아 내부 요소를 모두 출력하는 함수이다.
{
	cout << "== Print ==" << endl;

	for (auto iter = data.begin();
		iter != data.end();
		++iter)
		cout << *iter << ", ";

	cout << endl;
}

int main()
{
	list<int> data1({ 1,2,3,2 }); //list를 생성한 뒤 맨 마지막에 3을 다시 추가한다. 이렇게해서 data1은 1,2,3,2,3을 보유한다.
	data1.push_back(3);
	data1.sort(); //list는 쉽게 정렬할 수 있는데, 이를 돕는 함수가 sort이다.

	Print(data1); //data1을 출력한다. 결과는 1,2,2,3,3 이다.

	data1.unique(); //data1의 중복 데이터를 삭제한다. unique 함수를 사용하면 맨 처음 데이터만 남기고 모두 삭제된다.

	Print(data1); //data1을 출력한다. 결과는 1,2,3 이다.

	list<int> data2 = { 4,5,6 }; //새로운 list를 생성한다.
	data2.merge(data1); //data2와 data1을 합치는데 사용되는 함수는 merge이다.

	Print(data2); //data2를 출력한다. 결과는 1,2,3,4,5,6 이다.

	return 0;
}

/*
list는 vector와 기본 구조가 다르기 떄문에 at(i), operator[]와 같은 랜덤 엑세스를 지원하지 않는다.
list는 이중 링크드 리스트로 구현되었으며 삽입, 삭제가 빠르다는 장점이 있다.
반면 특정 원소에 접근하지 못하고 컨테이너 요소에 접근하려면 반드시 반복자를 이용해야 한다.
그래서 랜덤하게 접근하지 않는 데이터는 list로 구현하는 것이 좋다.
*/