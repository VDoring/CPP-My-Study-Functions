//131
//예외 처리 이해하기(try catch exception)
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> data; //정수를 저장할 벡터 선언
	int number = 0; //정수를 저장할 변수 선언

	//try catch의 기본 형태. catch에는 여러 인자가 올 수 있는데 기본적으로는 exception을 사용한다.
	try
	{
		number = data.at(10); //이 라인에서 벡터 data의 10번째 인자에 접근하는데 data벡터에는 아무 자료가 없어서 오류가 발생한다. 이렇게 인덱스 오류가 발생하면 catch문이 동작하여 20번 라인이 출력된다.
	}
	catch(exception e)
	{
		cout << e.what() << endl; //what 함수는 에러 메세지를 의미한다.
	}

	return 0;
}

/*
프로그래머에게 예외처리 능력은 중요하다. 사용자가 의도하지 않은 형태로 프로그램을 사용하거나 개발 과정에서 미처 처리하지 못한 예외적인 구분은 언제든 존재할 수 있다.
이런 부분을 소스코드로 풀어 고객사에서 프로그램이 잘 구동되도록 만들어 주는 것이 중요하다.

예외 처리는 앞서 언급했듯 프로그래머가 의도하지 않거나 예상치 못했던 에러를 해결하는데 도움을 준다.
또한 개발 과정에서 내부적으로 사용할 많은 에러 코드가 작성된다.
모든 에러코드를 하나로 정리하는 것 또한 어려울 수 있다.
이럴떄 원하는 부분을 try catch로 묶어 일괄적으로 처리하는 것이 좋다.
*/