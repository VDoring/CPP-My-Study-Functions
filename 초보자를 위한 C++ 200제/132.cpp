//132
//예외 처리 응용하기(char, int)
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> data; //정수를 저장할 벡터 선언
	data.push_back(1); //정수를 저장할 변수 선언

	try //(필자가 자주 사용하는 형태라고 한다.) 유형에 맞춰 원하는 에러 메시지를 출력할 수 있다. 로그 파일을 만들 떄 위와 같이 작성하면 에러 발생 지점을 정확히 잡아낼 수 있다.
	{
		if (data.empty() == true)
			throw "벡터가 비어 있습니다."; //throw는 C++에서 유일하게 예외 상황과 에러 조건을 다른 코드에 알려주는 키워드이다.

		if (data.size() < 2)
			throw 99;
	}
	catch (char* e) //throw 인자가 char일때 실행
	{
		cout << "catch (char* e)" << e << endl;
	}
	catch (int e) //throw 인자가 int일때 실행
	{
		cout << "catch (int e) " << e << endl;
	}

	return 0;
}

/*
예외 결과로 정수 99를 25번 라인으로 넘겨 27번 라인이 수행된다.

만약 9번 라인을 주석처리해 벡터에 아무 데이터가 없도록 설정한다면 23번 라인이 수행된다.
*/