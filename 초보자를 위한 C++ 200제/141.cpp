//141
//using 사용하기
#include <iostream>
#include <vector>

namespace MyArea //네임스페이스 영역을 선언한다. 이 영역 안에는 정수를 리턴하는 함수 Plus가 있습니다
{
	int Plus(int x, int y)
	{
		return x + y;
	}
}

using namespace std;
using namespace MyArea; //MyArea를 사용하기 위해 using namespace 키워드를 이용한다. using을 사용하는 방법 중 하나로 이 선언으로 MyArea 안에 있는 모든 기능을 이 코드 안에서 사용할 수 있다. 위에 라인 std도 마찬가지다.
using MyVector = vector<int>; //using의 또 다른 사용 방법으로 vector<int>를 지칭하는 별명을 지어준다. MyVector는 이제 vector<int>와 의미가 똑같다.

int main()
{
	MyVector data; //vector<int>의 별명으로 MyVector를 지정했기 떄문에 이 라인은 vector<int> data와 똑같다. 다음라인과 그다음라인에서 벡터에 데이터를 추가하고 결과를 출력한다.
	data.push_back(1);
	data.push_back(2);

	cout << "Data : " << data.at(0) << ", " << data.at(1) << endl;
	cout << "Plus : " << Plus(2, 4) << endl; //Plus 함수를 단독으로 호출할 수 있는 이유는 using namespace로 MyArea를 선언했기 떄문이다. 이 코드 안에서 MyArea 영역의 모든 요소를 사용할 수 있다.

	return 0;
}

/*
앞장에서 typedef를 알아봤는데, 사실 using 키워드를 이용하는 것이 더 효율적이다.
typedef는 C++ 코드가 익숙하지 않은 사람들에겐 낯설지만 using은 직관적이라 코드 가독성이 높다.

typedef나 using이나 사용 방법이 비슷하고 의미하는 바도 비슷하지만 가독성과 확장성 문제 때문에 typedef를 아예 사용하지 말라는 이야기도 있다.
물론, 회사마다 사용 방법과 코드 컨벤젼이 다르므로 무엇이 더 효과적이라고 단언할 순 없다.
하지만, 최소한 두 키워드 모두 사용하지 않다가 이제 도입한다면 using을 사용하는 것이 좋다.
*/