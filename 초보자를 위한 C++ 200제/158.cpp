//158
//list 합치기, 이어 붙이기(merge, splice)
#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<int> data1; //정수형 리스트 2개를 선언하고 초기값은 각각 {2,7}과 {3,4,5}로 설정한다.
	list<int> data2{3, 4, 5};

	data1.push_back(2);
	data1.push_back(7);

	data1.merge(data2); //merge 함수를 이용하여 data1과 data2를 합친다.
	                    //merge의 특징은 크게 2가지다. 하나는 합칠 떄 오름차순으로 자동 정렬 된다는 것. 다른 하나는 인자로 사용되는 컨테이너가 merge 이후 데이터가 삭제된다는 것이다.
	                    //이 라인을 거치면 data1에는 2,3,4,5,7이 오름차순으로 저장되고 data2는 빈 컨테이너가 된다.

	cout << "== List Merge" << endl; //data1을 출력한다. 결과는 2,3,4,5,7 이다.
	for (list<int>::iterator it = data1.begin(); it != data1.end(); ++it)
		cout << ' ' << *it;
	cout << endl;

	data2 = { 3,4,5 }; //data2에 3,4,5를 저장한다.
	data1.splice(data1.begin(), data2); //splice 함수는 이어 붙인다는 의미이다. data1의 맨 앞에 data2를 삽입하기 때문에 24번 라인을 지나면 data1에는 3,4,5,2,3,4,5,7이 저장된다.

	cout << "== List Splice ==" << endl; //data1을 출력한다. 결과는 3,4,5,2,3,4,5,7 이다.
	for (auto it = data1.begin(); it != data1.end(); ++it)
		cout << ' ' << *it;

	return 0;
}