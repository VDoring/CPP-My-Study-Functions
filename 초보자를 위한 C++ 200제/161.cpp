//161
//map 검색, 삭제하기(find, erase)
#include <iostream>
#include <map>
#include <string>

using namespace std;

void Print(const map<int, string> &data) //map을 인자로 받아 내부 요소를 모두 출력하는 함수이다.
{
	cout << "== Print ==" << endl;

	for (auto iter = data.begin();
		iter != data.end();
		++iter)
		cout << iter->first << " : " << iter->second << ", ";

	cout << endl;
}

int main()
{
	map<int, string> data; //map을 생성하고 데이터 3쌍을 삽입한다.
	data.insert({ 5, "test1" });
	data.insert({ 3, "test2" });
	data.insert({ 11, "test3" });

	data[3] = "test 수정"; //연산자 =을 사용해 value를 수정할 수 있다. 이떄 사용한 3이란 정수는 인덱스 3번이 아닌 키 값 3을 의미한다.

	auto result = data.find(11); //find 함수의 인자로 키 값을 입력한다. 여기서도 정수 11은 인덱스 11이 아니라 키 값 11을 의미한다. find의 반환형은 반복자 iterator로 auto는 map<int,string>::iterator와 같다.

	if (result != data.end()) //30번 라인의 반복자는 컨테이너 map의 처음 위치에서 마지막 위치까지 순회한다. 만약 검색에 성공하면 해당 위치를 반환하고 찾지 못했다면 순회의 마지막 위치를 반환한다. 그래서 반환자를 이용할 땐 이와 같이 != map.end를 사용한다. 마지막 위치까지 이동했는데 검색하지 못했다면 데이터가 없다는 뜻이다.
		cout << "== 검색 성공 : " << result->first << ", " << result->second << endl;
	else
		cout << "== 검색 실패 ==" << endl;

	data.erase(5); //erase 함수에 키 값 5를 삭제한다. 마찬가지로 인덱스 5번이 아닌 키 값 5를 의미한다.

	Print(data); //컨테이너 data의 모든 요소를 출력한다.

	return 0;
}