//070
//포인터 변수 사용하기
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int PointerFunc(vector<string> *info) //함수를 선언하였다. 인자는 vector<string> 형이다.
{
	//함수 인자로 전달받은 벡터의 크기를 조회한다.
	if (info->empty() == true) //만약 비어 있다면 0을 반환한다. (-> 표시는 포인터 변수를 다루는 규칙이다.)
		return 0;
	else                       //만약 비어 있지 않다면 info의 크기를 반환한다.
		return sizeof(info);
}

int main()
{
	//string 자료형을 저장하는 벡터 변수를 선언하고 데이터를 추가한다.
	vector<string> message;
	message.push_back("고려 장군");
	message.push_back("척준경!");
	message.push_back("절친 이름은");
	message.push_back("... 무엇일까");

	cout << "포인터 인자 크기 : " << PointerFunc(&message) << endl; //PointerFunc 함수에 벡터를 전달한다. 결과는 4
	cout << "원래 변수 크기 : " << sizeof(message) << endl; //벡터의 원래 크기를 출력하는데, 포인터 인자 크기는 4로 차이가 난다.
	                                                        //포인터는 주소값 4바이트라서 함수가 포인터 인자를 받을 때 주소만 복사하기 때문이다.
	                                                        //함수를 호출할 때 이처럼, 포인터를 이용하면 인자 복사 시간을 줄일 수 있어 프로그램 성능 향상에 도움이 된다.

	return 0;
}

/*
포인터를 사용하면 프로그램 전체 성능을 올리는데 도움이 되기도 한다.
힘수는 인자로 넘어오는 값을 일단 복사하여 사용하는데 만약 인자가 크다면 복사하는데 많은 시간이 소요된다.
해당 함수를 자주 호출할 수록 프로그램 성능은 그에 비례하여 떨어진다.
인자의 크기가 클수록 포인터를 이용하여 4바이트 주소만 넘기는 것이 좋다.
*/