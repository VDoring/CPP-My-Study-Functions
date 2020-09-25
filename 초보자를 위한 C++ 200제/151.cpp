//151
//tuple 사용하기(piecewise_construct)
#include <iostream>
#include <tuple>

using namespace std;

struct TupleExam { //piecewise_construct를 확인하기 위해 구조체를 생성하고 각기 다른 생성자를 선언한다. 하나는 튜플을 인자로 받으며, 다른 하나는 튜플을 구성하는 자료형을 분리하여 받는다.
	TupleExam(tuple<int, string>) {
		cout << "Tuple로 인자 전달" << endl;
	}

	TupleExam(int n, string s) {
		cout << "piecewis_construct로 인자 전달" << endl;
	}
};

int main()
{
	tuple<int, string> data(1, "str"); //정수와 문자열을 보유한 튜플을 선언한다.

	pair<TupleExam, TupleExam> data1(data, data); //pair를 생성하는데 인자로 data 튜플을 전달한다. 9번 라인의 생성자가 호출된다.
	pair<TupleExam, TupleExam> data2(piecewise_construct,data,data); //pair를 생성하는데 인자로 data 튜플을 전달한다. 다만 앞에 piecewise_construct 키워드를 주어 튜플이 아닌 튜플을 구성하는 요소들을 분할하여 인자로 전달한다.
	pair<TupleExam, TupleExam> data3(make_tuple(2, "str"), make_tuple(2, "str")); //pair을 생성하는데 인자로 새로운 튜플 2개를 전달한다. 22번 라인처럼 9번 라인이 수행된다.
	pair<TupleExam, TupleExam> data4(piecewise_construct, make_tuple(2, "str"), make_tuple(2, "str")); //24~25번 라인과 똑같지만 첫 번쨰 인자로 piecewise_construct 키워드를 전달한다. 13번 라인이 수행된다.
	
	return 0;
}

/*
pair를 생성할 때, 튜플을 인자로 사용하지 않고 튜플 내부 요소들을 인자로 사용할 수 있다.
인자로 전달되는 것은 튜플이 아니라 튜플 내부의 개별 요소들이다. 이떄 사용하는 키워드가 piecewise_construct이다.
*/