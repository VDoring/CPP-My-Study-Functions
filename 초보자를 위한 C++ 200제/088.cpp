//088
//구조체 사용하기(struct)
#include <iostream>
#include <string>

using namespace std;

//struct 키워드를 사용해 구조체를 선언한다.
struct Princess
{
	//구조체를 구성하는 요소.
	string name;
	string father;
	string birthday = "알 수 없음"; //미리 데이터를 초기화할 수 있다.
} Goryeo[2]; //구조체를 배열로 사용할 수 있게 미리 변수를 지정할 수 있다.

int main()
{
	//구조체 변수를 선언하고 구조체 내부 데이터에 새로운 값을 할당한다.
	//Goryeo 변수는 사용하지 않고 메인 함수에서 변수를 새로 추가해 사용한다.
	Princess jungmyung;
	jungmyung.name = "정명공주";
	jungmyung.father = "조선 선조";
	jungmyung.birthday = "1603년 6월 27일";

	//미리 선언된 배열 변수를 사용하여 데이터를 설정한다. (여기선 Goryeo 변수)
	Goryeo[0].name = "선정왕후";
	Goryeo[0].father = "고려 성종";
	Goryeo[1].name = "효정공주";
	Goryeo[1].father = "고려 현종";

	//jungmyung의 모든 데이터를 출력한다.
	cout << "== 조선 공주 ==" << endl;
	cout << jungmyung.name << endl;
	cout << jungmyung.father << endl;
	cout << jungmyung.birthday << endl << endl;

	//Goryeo의 모든 데이터를 출력한다.
	cout << "== 고려 공주 ==" << endl;
	cout << Goryeo[0].name << endl;
	cout << Goryeo[0].father << endl;
	cout << Goryeo[0].birthday << endl << endl;
	cout << Goryeo[1].name << endl;
	cout << Goryeo[1].father << endl;
	cout << Goryeo[1].birthday << endl;

	return 0;
}

/*
구조체는 여러 데이터 타입들을 한데 묶어 사용할 수 있는 일종의 데이터 묶음이다.
C언어에서는 클래스 개념이 없기 떄문에 주로 구조체를 이용해 데이터를 가공 후 저장하는 용도로 많이 사용한다.
하나의 주제에 맞는 여러 데이터 타입을 한데 묶어 사용할 수 있기 때문에 매우 편리하기 때문이다.

C++에는 클래스 개념이 있기 때문에 구조체를 사용하지 말라는 주장도 있지만, 프로그래머들 사이에서도 의견이 분분한 부분이기 때문에 생략하겠다.
*/