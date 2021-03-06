//130
//인라인 함수 사용하기(inline)
#include <iostream>

using namespace std;

inline int Max(int x, int y) //함수 이름 앞에 inline이란 키워드만 추가하면 된다. 이 함수는 정수 2개를 받아 더 큰 값을 리턴한다.
{
	return x > y ? x : y;
}

int main()
{
	//인라인 함수를 주로 사용하는 경우이다. 특정 함수를 반복해서 호출하는 것보다 해당 위치에 함수의 소스가 존재하는 것이 효율적이다. 하지만 여러 위치에서 해당 함수를 사용한다면 중복 소스를 만들어 삽입해야 하기 때문에 예제처럼 인라인 함수로 분리하는 것이 좋은 방안이다. inline 함수는 컴파일 단계에서 함수 호출 대신 코드 복사를 한다.
	for (int i = 0; i < 5; i++)
		cout << Max(i, i + 10) << endl;

	return 0;
}

/*
함수 호출이 빈번한다면 inline 키워드를 이용하는 것이 좋다.
일반적으로 함수 호출은 비용(cost)이 많이 발생한다고 표현한다. 즉 프로그램 성능 저하를 의미한다.
그래서 자주 사용되며 코드가 짧은 함수라면 인라이닝하는 것이 좋다.
inline으로 선언된 함수는 컴파일 단계에서 소스가 그대로 복사되어 호출 지점에 삽입된다.
그래서 전체 프로그램 크기는 커질 수 있다.
*/

/*
함수를 호출한다는 의미는 함수가 있는 곳으로 "이동"한다는 의미와도 같다.
이동하는 데 걸리는 시간은 이동하지 않고 코드를 처리하는 시간보다 길다. 또한 인자가 존재하면 그만큼 함수로 이동하여 처리하는 데 걸리는 시간이 길어진다.

인라이닝을 사용하면 함수 위치로 이동, 함수 인자를 복사하는데 걸리는 시간을 무시하기에 작업 효율이 좋아진다.

하지만 인라이닝은 코드를 복사하는 개념이기에 프로그램 크기가 늘어날 수 있다.
프로그램 크기가 늘어나면 컴파일러는 일부 인라이닝 코드를 무시하는 경우도 있다.
또한 인라이닝된 코드는 함수가 아니라 함수 주소도 없어 참조가 필요한 경우엔 오히려 성능 저하의 요소가 될수도 있다.
*/