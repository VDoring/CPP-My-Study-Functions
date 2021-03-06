//109
//클래스 소멸자 정의하기(~)
#include <iostream>
#include <vector>

using namespace std;

class TempClass
{
public:
	TempClass()
	{
		cout << "생성자 호출" << endl;
	}

	~TempClass() //소멸자는 생성자처럼 이름은 클래스와 똑같지만, 그 앞에 ~가 붙는다는 점이 다르다.
	{
		cout << "소멸자 호출" << endl;
	}

};

int main()
{
	TempClass *temp_class = new TempClass(); //객체는 스택 영역과 힙 영역에서 관리한다.
	                                         //이 줄에서처럼 포인터를 이용해 new 키워드로 객체를 생성하면 스택이 아닌 힙 영역에 할당된다.
	                                         //앞선 예제처럼 선언할 경우 스택 영역에 할당되어 함수가 종료되면 클래스 객체가 차지하던 메모리도 반환된다.
	                                         //(이번 예제에선 delete 키워드와 소멸자 사용을 위해 힙 영역에 할당합니다. 그러기 위해 new를 사용했습니다.)

	delete temp_class; //클래스 객체를 삭제해 메모리를 반환한다. 명시적으로 할당된 메모리는 반드시 명시적으로 해제해 메모리 누수를 방지해야한다.
	                   //객체를 new로 생성하면 delete로 삭제하고, 포인터는 null로 만들어야 한다. 이것은 공식!
	temp_class = nullptr;

	return 0;
}

/*
클래스 객체나 변수 등을 사용하는 시점에 스택 또는 힙 영역에 메모리 할당이 이뤄진다.
사용이 끝나고 나선 메모리 해제가 이루어지며 컴퓨터로 해당 메모리 영역이 반환된다.
컴파일러는 이를 위해 클래스 객체가 삭제될 때 소멸자 함수를 호출한다.
*/