//013
//네임스페이스 배우기(namespace)
#include <iostream>
using namespace std;

/*
네임스페이스(namespace) 사용이유
1) 코드 안에서 같은 이름으로 변수, 함수 이름을 지어야 할때
2) 외부에서 참조하는 소스를 사용하다 보면 같은 이름의 변수나 함수가 있을 수 있음
*/

//변수나 함수를 해당 영역에서만 유효하도록 제한한다.
namespace silla { //silla 네임스페이스 선언
	int year = 935; //(동일한 이름의 변수!)

	void CentralArea() { //(동일한 이름의 함수!)
		cout << "경상도" << endl;
	}
}

namespace baekjae { //baekjae 네임스페이스 선언
	int year = 660; //(동일한 이름의 변수!)

	void CentralArea() { //(동일한 이름의 함수!)
		cout << "충청도" << endl;
	}
}

//새로 선언한 두 네임스페이스를 사용하겠다고 선언한다. 이때 using 키워드를 이용한다.
using namespace silla;
using namespace baekjae;

int main() {
	cout << "신라 중심지 : ";
	silla::CentralArea();
	cout << "신라 멸망연도 : " << silla::year << endl;

	cout << "백제 중심지 : ";
	baekjae::CentralArea();
	cout << "백제 멸망연도 : " << baekjae::year << endl;

	return 0;
}