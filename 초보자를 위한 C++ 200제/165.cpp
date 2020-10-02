//165
//람다 기본 사용 방법 익히기([]())
#include <iostream>

using namespace std;

auto Func1 = []() { cout << "Lambda Function" << endl; }; //람다 기본 문법에 맞춰 문장 출력하는 함수를 구성한다. 캡처 블록과 파라미터는 비어 놓을 수 있지만 []와 ()는 생략할 수 없다.
auto Func2 = [](int x, int y)->bool { return x < y; }; //파라미터 2개를 받는 람다 함수이다. 파라미터 뒤에 붙은 " ->bool " 부분은 리턴 타입을 의미하는데 생략해도 무방하다. 이 함수는 x가 y보다 작다면 true, 그렇지 않다면 false를 반환한다.

int main()
{
	int x = 2;

	auto Func3 = [=](int y) { //7,8라인의 람다 함수를 수행하는 세 번쨰 람다 함수이다. 이 함수는 켑처 블록에 =이 삽입되어 있다. =은 유효 영역의 모든 변수에 접근하여 사용할 수 있다는 의미이다. 그렇기때문에 12번 라인의 정수형 변수 x를 람다 함수 내부에서 이용할 수 있다.
		Func1();
		cout << "x < y = " << Func2(x, y) << endl;
	};

	Func3(4); //람다 함수 Func3를 수행한다. Func1을 수행하고 인자로 받은 y와 12번 라인 x를 Func2 람다 함수로 전달한다.

	auto Func4 = [=](int y) { return x * x + y * y; }; //14~17라인과 비슷한 람다 함수이다. 캡처된 변수 x와 인자로 전달받은 5를 이용해 연산한다.

	cout << "x * x + y * y = " << Func4(5) << endl;

	return 0;
}

/*
C#, Qt, C++에 공통으로 적용된 익명 함수 람다는 쓰임새가 매우 다양하다.
람다 소스를 작성하면 그 자리에 인라이닝 효과가 생기며, 함수를 별도로 작성하지 않아도 되기 떄문에 코드량이 줄어드는 장점도 있다.
*/

/*
람다 문법
[캡처 블록](파라미터) {구성 소스}

캡처 블록 : 람다 함수에서 참조할 변수 목록
파라미터 : 람다 함수에서 사용할 인자 목록
구성 소스 : 일반 함수처럼 구성할 수 있음.
*/