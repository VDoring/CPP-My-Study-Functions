//146
//tuple 사용하기(make tuple, get)
#include <iostream>
#include <tuple>
#include <string>

using namespace std;

int main()
{
	typedef tuple<string, int, double>Data; //typedef를 이용해 튜플을 정의한다. Data 튜플은 string, int, double까지 3개의 자료형을 저장할 수 있다.
	
	Data data1("문자열", 10, 1.2); //튜플 Data의 객체를 만들어 값을 초기화한다.
	auto data2 = make_tuple("문자열", 10, 1.2); //(이 라인도 윗줄과 같다)

	cout << get<0>(data1) << ", " << get<1>(data1) << ", " << get<2>(data1) << endl; //튜플에 담겨있는 데이터는 get을 이용해 가져올 수 있다. get 뒤에는 <>를 사용해 인덱스 번호를 넣고, () 안에는 실제 튜플 객체 이름을 기입한다.

	return 0;
}

/*
기존에는 하나의 컨테이너, 하나의 변수는 하나의 자료형만 담을 수 있었기 떄문에 사용 중 제약 사항이 존재했다.
하지만 tuple을 이용하면 많은 자료형을 한 번에 다룰 수 있다.

단순한 자료를 저장하거나 자료 구조를 이용할 떄 다양한 자료형과 객체들을 한꺼번에 다룰 수 았어 유용하게 활용할 수 있다.
*/