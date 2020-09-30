//159
//array 삽입, 수정, 복사하기(fill, at, copy)
#include <iostream>
#include <array> //array를 사용하기 위해 include

using namespace std;

void Print(const array<int, 3> &data) //array를 인자로 받아 내부 요소를 모두 출력하는 함수이다.
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
	array<int, 3> data1{ 10,2,5 }; //array를 생성한다. array는 vector와 사용 방법이 비슷하지만 크기가 고정되어 있다는 차이가 있다. array를 선언하고 <> 사이에 자료형과 array의 크기를 입력한다.
	array<int, 3> data2;
	data2.fill(0); //data2에 fill 함수를 호출하고 인자로 0을 전달한다. fill은 array 전체를 특정 값으로 설정할 떄 사용한다.
	data2.at(1) = 200; //array는 랜덤 엑세스를 허용하기 때문에 at 함수를 호출하여 두 번쨰 인자 값을 200으로 설정 할 수 있다.

	Print(data2); //data2를 출력한다. 결과는 0,200,0 이다.

	copy(data1.begin(), data1.end(), data2.begin()); //copy 함수를 이용해 array를 복사한다. data1의 첫 번째 요소부터 마지막 요소를 data2의 첫 번쨰 위치부터 복사 후 삽입한다. 즉 data2의 요소는 data1의 요소로 변경된다.

	Print(data1); //data1을 출력한다. 결과는 10,2,5 이다.
	Print(data2); //data2을 출력한다. 결과는 10,2,5 이다.

	return 0;
}