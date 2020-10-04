//166
//람다에서 특정 조선 이해하기(find_if, count_if)
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int number = 4;

	vector<int> data{4, 1, 3, 5, 2, 3, 1, 7}; //정수형 벡터를 선언한다.

	vector<int>::iterator result1 = find_if(data.begin(), data.end(), [number](int i) //벡터를 순회해야 하기 떄문에 iterator을 사용한다. find_if는 특정 조선에 만족하는 값을 반환하는 함수이다. 첫 번쨰, 두 번쨰 인자로 벡터의 범위를 전달한다. 세 번쨰 인자로 람다 함수가 전달되는데, 켑쳐하는 값은 11번 라인의 정수형 변수 number이다.
	{                                                                                 //그리고 인자로 받는 int i 값은 iterator가 순회하는 벡터 data의 값이다. 즉, 첫 번째와 두 번쨰 인자로 인해 시작 위치에서 마지막 위치까지의 벡터 데이터가 find_if의 세 번쨰 인자로 전달된다.
		return i > number;                                                            //15번 라인에서 iterator가 가리키는 값이 4보다 크다면 해당 위치를 리턴하고 람다 함수는 종료된다. 이떄 find_if 함수도 결과값을 찾았기 떄문에 이어서 종료된다.
	});

	cout << "4보다 큰 첫 번쨰 정수 : " << *result1 << endl; //4보다 큰 첫 번쨰 정수는 5이기 떄문에 결과 값은 5이다.

	auto result2 = count_if(data.begin(), data.end(), [number](int i) //15번 라인에서는 벡터 자료형과 iterator를 모두 적었지만 auto 키워드를 사용하면 간소화할 수 있다.
	{                                                                 //count_if 함수는 특정 조건에 만족하는 개수를 리턴하는 함수로 람다 함수가 받는 인자와 캡쳐하는 데이터는 15번 라인과 똑같다.
		return i > number;                                            //이 라인에서 정수 4보다 큰 벡터 데이터를 카운팅하여 리턴한다.
	});

	cout << "4보다 큰 정수 개수 : " << result2 << endl; //벡터 data에서 4보다 큰 정수는 5와 7로 결과값은 2이다.

	return 0;
}

/*
람다는 기본 C++ 함수에도 적용해 사용할 수 있다.
이 장에서는 자주 사용하는 함수 2개와 람다의 복합 응용 방법을 소개한다.
*/