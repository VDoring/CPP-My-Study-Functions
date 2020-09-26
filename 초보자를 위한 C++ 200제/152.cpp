//152
//vector 사용하기(assign, at, front, back, empty, size)
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> data; //int 형 벡터를 생성한다.

	data.assign(5, 100); //0~5번쨰까지 정수 100을 저장한다. assign은 일괄적으로 특정 영역에 데이터를 설정할 떄 사용하며 기존 데이터는 삭제된다.

	for (int i = 0; i < data.size(); i++) //for문의 인자로 data의 size함수를 이용한다. size 함수는 벡터에 저장된 데이터 개수를 반환한다. 이 경우 반환된 값은 5이다.
		cout << "data " << i << " : " << data.at(i) << endl; //at에 인자로 넘어온 정수는 벡터 내부 인덱스를 의미한다. at(2)라고 사용한다면 벡터의 3번쨰(0,1,2) 데이터를 리턴한다.

	data.front() = 1; //벡터의 첫 번쨰 데이터를 설정하거나 가져올 때 사용하는 함수가 front이다.
	data.back() = 2; //벡터의 마지막 데이터를 설정하거나 가져올 때 사용하는 함수가 back이다.

	if (data.empty() == true) //벡터가 비어 있는지 알려주는 함수는 empty이다. 이 경우 벡터에 데이터가 있으나 반환값은 false이다. 벡터가 비어 있다면 true가 반환된다. 종종 size를 이용해 벡터가 비어 있는지 확인하는 경우가 있는데, 프로그램 성능 상 empty 함수를 이용하는 것이 좋다. 벡터에 데이터가 100개 있다면 100번을 카운팅한 다음에 결과를 리턴한다. 이 경우 프로그램 카운터는 100이지만 empty는 1이다. empty 함수가 더 효율적이다.
	{                         //벡터가 비어 있다면 22번 라인이 실행되고 그렇지 않으면 26,27번 라인이 수행된다.
		cout << "벡터가 비어 있습니다" << endl;
	}
	else
	{
		for (int i = 0; i < data.size(); i++)
			cout << "data " << i << " : " << data.at(i) << endl;
	}

	return 0;
}

/*
앞선 예제에서 벡터를 사용했었는데, 앞으로 이 컨테이너들의 다양한 사용 방법을 알아보도록 하겠다.
*/