//155
//반복자 iterator 사용하기
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> data({ 1,2,3 });

	for (vector<int>::iterator iter = data.begin(); //10라인에서 생성한 벡터의 반복자를 생성한다. ::iterator를 사용하며, data의 첫 번쨰 위치를 가리킨다.
		iter != data.end(); //반복자 iter가 가리키는 곳이 마지막 위치가 아니라면 for문은 계속 수행된다.
		++iter) //후위 증가를 사용해 iter가 순차적으로 벡터 내부 위치를 가리킨다.
	{
		cout << *iter << ", "; //반복자가 가리키는 현재 위치의 값을 출력한다. 결과는 1,2,3 이다.
	}

	for (auto iter = data.cbegin(); //iter의 자료형을 auto로 하면 조금 더 간편하게 다룰 수 있다. 그리고 begin, end 대신 cbegin, cend를 사용했는데 c는 const라는 의미로 반복자를 통해 값을 수정할 수 없도록 설정할 수 도 있다. 결과는 1,2,3 이다.
		iter != data.cend();
		++iter)
	{
		cout << *iter << ", ";
	}

	for (auto iter = data.rbegin(); //컨테이너 순회를 끝에서 시작할 수 있다. 이떄는 rbegin과 rend를 사용한다. 결과는 3,2,1 이다.
		iter != data.rend();
		++iter)
	{
		cout << *iter << ", ";
	}

	data.clear(); //clear 함수로 벡터 내부의 데이터를 모두 삭제한다.

	return 0;
}

/*
반복자는 컨테이너의 위치를 가리키는 것으로 포인터와 비슷하다.

*       : 현재 위치
++      : 다음 위치
--      : 이전 위치
==, !=  : 같은 위치인지 비교
=       : 반복자 설정

vector.begin은 벡터의 첫 번쨰 위치, vector.end는 마지막 위치를 가리키며 반복문에서 반복자를 사용할 땐 전위보다 후위를 사용한다. 후위 처리 속도가 더 빠르기 떄문인데 전위 증가를 사용하면 새로운 객체를 반환하지만 후위 증가를 사용하면 이전 객체를 참조해 사용할 수 있기 때문이다.

*/