//125
//type_tratis 사용하기[3] (conditional)
#include <iostream>
#include <string>

using namespace std;

template <typename T1, typename T2> //다음 장에서 배울 함수 template를 선언한다. 18번 라인에서 int, double로 인자를 넘기기 떄문에 여기서 T1은 int, T2는 double이 된다.
string TmpFunc(T1 x, T2 y) //11번 라인에서 conditional을 사용하는데, 첫 번째 인자에 true가 할당되면 int, false가 할당되면 double이 type1의 자료형이 된다. 여기서는 T1과 T2가 같은 자료형이라면 true, 그렇지 않다면 false이다.
{
	conditional<is_same<T1, T2>::value, int, double >::type type1;

	return typeid(type1).name();
}

int main()
{
	string type = TmpFunc(1, 22.3); //TmpFunc에 정수 1과 실수 22.3을 인자로 넘긴 후 리턴값으로 자료형을 받는다. 11번 라인 is_same은 int와 double을 비교하기 때문에 conditional의 첫 번째 인자는 false이다. false이기 때문에 double을 리턴값으로 받는다.

	if (type == "double") //리턴값 type이 문자열 "double"이라면 21번 라인이 수행되고 아니라면 23번 라인이 수행된다.
		cout << "double 자료형입니다" << endl;
	else
		cout << "double 자료형이 아닙니다" << endl;

	return 0;
}

/*
개발 과정에서 자료형을 특정지을 수 없을 떄 타임 트레이츠의 conditional이나 다음장에서 배울 탬플릿을 적절히 응용하는 것이 좋다.
*/