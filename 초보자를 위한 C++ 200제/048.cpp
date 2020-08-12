//048
//소수점 분리하기(modf) 
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	//실수 3개 선언 
	double x = 1.2345;
	double div = 0.0;
	double mod = 0.0;
	
	//modf 함수를 이용해 실수의 정수와 소수를 구한다.
	//modf 함수 반환값은 나머지 소수이고, modf 함수 인자로 전달되는 두 번째 변수에는 정수 몫이 저장된다.
	//div변수의 주소를 넘기기 떄문에 해당 함수에서 값을 변경하면 함수 호출 영역 밖에서도 값이 유효하게 된다. 
	mod = modf(x,&div);
	
	cout << "1.2345의 몫 : " << div << ", 나머지 : " << mod << endl;
	
	return 0;
}
