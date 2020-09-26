//153
//vector 사용하기(벡터 수정)
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> data1({ 1,2,3 }); //int형 벡터를 2개 생성한다.
	vector<int> data2 = { 10,20,40 }; //C++11부터 초기화 리스트를 사용할 수 있으므로 10번, 11번 라인처럼 간편하게 초기화할 수 있다.

	data1.swap(data2); //벡터 swap 함수는 벡터 데이터를 서로 바꾼다. data1은 data2의 값으로 변경되고, data2는 data1로 변경된다.
	data1.insert(data1.begin() + 1, 20); //벡터 insert 함수는 원하는 위치에 값을 삽입할 때 사용된다. 첫 번쨰 인자는 벡터 내부 위치(인덱스)이고, 두 번쨰 인자는 삽입할 내용이다. 첫 번쨰 인자로 사용하는 begin은 첫 번째 위치에 접근하는 반복자를 리턴한다. 반복자는 다음 예제에서 다루겠지만, 컨테이너를 순회하고 접근하는 방법을 제공한다. begin() + 1은 첫 번째 위치의 다음 위치란 뜻으로 즉 2번쨰 인자를 의미한다. 14번 라인은 첫 번째 인자와 두 번쨰 인자 사이(인덱스 0과 1사이)에 새로운 데이터를 삽입한다는 의미이다.

	cout << "== data1 ==" << endl;

	for (int i = 0; i < data1.size(); i++) //두 벡터의 데이터를 모두 출력한다. data2는 data1과 swap 한 뒤 변경이 없었기 때문에 1,2,3이 출력되고 data1은 2번쨰 위치에 20을 삽입했기 때문에 결과는 10,20,20,40이다.
		cout << "data1 (" << i << ") : " << data1.at(i) << endl;

	cout << endl << "== data2 ==" << endl;

	for(int i = 0; i < data2.size(); i++)
		cout << "data2 (" << i << ") : " << data2.at(i) << endl;

	data2.erase(data2.begin(), data2.begin() + 2); //벡터 erase 함수는 지정한 범위의 데이터를 삭제한다. begin에서 begin + 2의 범위이기 때문에 첫 번째 두 번쨰 데이터가 삭제된다.

	data2.push_back(100); //벡터 맨 뒤에 데이터를 삽입할 땐 puch_back 함수를 사용한다. 벡터 맨 뒤 데이터를 삭제할땐 pop_back 함수를 사용한다. 31번 라인까지 실행되면 data2가 보유한 데이터는 3,100,200이다.
	data2.push_back(200);
	data2.push_back(300);
	data2.pop_back();

	data2.insert(data2.end(), data1.begin(), data1.end()); //14번 라인에서 사용한 insert 사용 방법과는 또 다른 방법이다. 벡터는 다른 벡터의 데이터를 복사해 일괄적으로 추가할 수 있다. 첫 번쨰 인자는 벡터에 삽입될 위치이며, 두 번쨰 인자는 복사할 벡터의 시작 위치이고, 세 번쨰 인자는 복사할 벡터의 종료 위치이다. 31번 라인은 기존의 data2 뒤에 data1의 데이터를 모두 삽입한다는 의미이다.

	cout << endl << "== data2 ==" << endl;

	for(int i = 0; i < data2.size(); i++) //data2의 최종 결과를 출력한다.
		cout << "data2 (" << i << ") : " << data2.at(i) << endl;

	return 0;
}