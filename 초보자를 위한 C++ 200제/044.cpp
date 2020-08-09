//044
//실수 반올림하기(round) 
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	cout << "round(1.1) : " << round(1.1) << endl; 
	cout << "round(2.3) : " << round(-2.3) << endl; 
	cout << "round(40.5) : " << round(40.5) << endl; 
	cout << "round(55.7) : " << round(-55.7) << endl; 
	cout << "round(100.9) : " << round(100.9) << endl; 
	
 	return 0;
}

/*
실수의 소수점을 반올림할 때 사용하는 함수 : round()
round 함수로 5개 실수를 반올림한다.
소수점은 5보다 크면 1을 올리고 5보다 작으면 소수점을 버린다.
양수라면 원하는 값으로 출력되지만, 음수의 경우 부호에 상관없이 무조건 올리기 때문에 의도하지 않은 값이 나올 수 있다.
음수라도 소수점이 5보다 크다면 무조건 1을 올려 원래 값보다 더 작은 값이 출력된다.

-55.7을 반올림하면 소수점 7 때문에 1이 증가해 결과는 -56이다.
floor, ceil과는 다르게 의도치 않은 결과가 출력된다.
round함수 사영 시 음수 변환할 땐 주의가 필요한 이유이다.

결과 : 1, -2, 41, -56, 101 

*/
