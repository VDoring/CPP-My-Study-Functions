//160
//map 삽입, 수정하기(insert, at)
#include <iostream>
#include <map> //map을 사용하기 위해 include
#include <string>

using namespace std;

void Print(const map<int, string> &data) //map을 인자로 받아 내부 요소를 모두 출력하는 함수이다. 16번 라인에서 iter의 first와 second요소를 가져오는데, map은 key와 value로 이뤄진다. 즉 first는 key, second는 value를 가리킨다.
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
	map<int, string> data; //map을 생성한다. key는 int, value는 string이다. 다음라인과 그다음라인에서는 map 형태에 맞춰 key와 value를 { } 안에 알맞게 설정하여 데이터를 삽입한다.
	data.insert({ 0, "첫 번쨰" });
	data.insert({ 1, "두 번쨰" });

	Print(data); //data의 요소를 출력한다. 결과는 0 : 첫번쨰, 1 : 두번쨰 이다.

	auto ret = data.insert({ 1, "세번쨰" }); //map에서 key는 중복될 수 없다. insert는 pair를 리턴하는데 pair는 서로 다른 두 타입의 값을 관리하는 클래스이다. insert가 정상적으로 수행되면 리턴된 pair가 마지막 요소를 가리키지만, 실패하면 이미 존재하는 key값의 위치를 반환한다. 키 1은 이미 존재하기 떄문에 이 경우에 insert는 실패하여 34번 라인이 수행된다.

	if (ret.second == true)
		cout << "데이터 추가 성공" << endl;
	else
		cout << "데이터 추가 실패" << endl;

	data.at(0) = "수정1"; //map은 랜덤 엑세스를 허용하기 때문에 at 함수를 호출하여 value로 수정할 수 있다. key는 수정할 수 없다.

	Print(data); //data의 요소를 출력한다. 결과는 0 : 수정1, 1 : 두번쨰 이다.

	return 0;
}

/*
map은 키와 값을 한 쌍으로 이용한다.
데이터 삽입, 수정, 삭제는 모두 키를 이용해 이루어지며 값은 중복될 수 있지만 키는 중복될 수 없다. map은 중복되지 않는 절대값을 이용해 데이터를 다룰 때 유용하게 사용할 수 있다.
*/