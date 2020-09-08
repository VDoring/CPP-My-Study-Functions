//133
//예외 처리 응용하기(사용자 정의, runtime_error)
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class InputError : public runtime_error //사용자 정의, 예외 처리 클래스를 선언한다. runtime_error를 상속받아야 try_catch에서 사용할 수 있으며, runtime_error는 메시지를 출력하는 요소로만 이해해도 된다.
{
public:
	InputError(int idx, string msg) //이 라인처럼 이 클래스는 2개의 인자를 받으며 다음 라인에서는 runtime_error를 string형태로 초기화한다. C++에서는 다음 라인처럼 변수를 초기화하는 것이 가독성 측면에서 유리하다. 전달받은 2개의 인자는 15번 라인에서 출력하는 요소로 사용된다.
		: runtime_error("")
	{
		cout << idx << "번 인덱스에 잘못된 입력값 : " << msg << endl;
	}
};

int main()
{
	vector<int> data; //int를 저장하는 벡터를 선언한다.
	data.push_back(1); //데이터를 한 개 추가한다.

	int idx = 10;
	int value = 20;

	try
	{
		if (idx >= data.size()) //data 벡터에 접근할 인덱스 값이 벡터 사이즈보다 크거나 같다면 다음 라인이 수행된다. 다음 라인으로 분기되면 34번으로 다시 분기되고 이어 36번 라인이 수행된다.
			throw InputError(idx, to_string(value));

		data.at(idx) = 99;
	}
	catch (InputError e) //C++에서 기본적으로 제공하는 키워드가 아닌 사용자 정의 클래스를 인자로 받는다. 36번 라인에서 what 함수를 사용할 수 있는건 InputError 클래스가 runtime_error를 상속 받았기 때문이다.
	{
		cout << e.what();
	}

	return 0;
}