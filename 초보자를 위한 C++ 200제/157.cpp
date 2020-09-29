//157
//list 특정 요소 삭제, 역순 재배치(remove, reverse)
#include <iostream>
#include <list>

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

bool IsOdd(int arg) //정수를 인자로 받아 홀수면 true 1, 짝수면 false 0을 리턴하는 함수이다.
{
	return arg % 2 == 0 ? 0 : 1;
}

int main()
{
	list<int> data1({1, 2, 4, 2, 7, 10, 13, 14}); //list를 생성한다.

	data1.remove(2); //remove 함수에 2를 삽입하면 data1의 요소 중 2는 모두 삭제된다.
	data1.remove_if(IsOdd); //list 요소를 삭제할 떄 조건을 줄 수 있다. remove_if 함수에 홀수, 짝수에 따라 true, false를 리턴하는 함수를 인자로 사용한다. 이 함수로 인해 data1의 홀수는 모두 삭제된다.

	Print(data1); //data1을 출력한다. 결과는 4,10,14 이다.

	data1.reverse(); //data1을 역순으로 재배치한다.

	Print(data1); //data1을 출력한다. 결과는 14,10,4 이다.

	return 0;
}