//019
//실수형 변수 이해하기(double)
#include <iostream>

using namespace std;

int main() {
	double pi_d = 3.14;
	float pi_f = 3.14f; //float는 값 뒤에 f를 붙인다.
						//컴퓨터는 실수를 기본적으로 8바이트 double로 생각하기 때문이다.

	cout << "pi_d = " << pi_d << endl;
	cout << "pi_f = " << pi_f << endl;

	return 0;
}

/*
실수형 데이터를 다룰 땐 double과 float 키워드를 사용한다.
double은 8바이트의 크기를 갖지만, float는 4바이트의 크기를 가진다.
double은 소수점 15자리, float는 소수점 7자리를 보유하기 때문에 일반적으로 float보단 double을 주로 사용한다.

만약 double과 float를 함께 사용하면 오버플로우(최대 값 초과), 언더플로우(최소 값 미만) 문제가 생길 수 있다.
*/