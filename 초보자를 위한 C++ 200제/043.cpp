//043
//실수 소수점 버리기 올리기(floor, ceil)
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	cout << "== 소숫점 버리기 ==" << endl;
	cout << "floor(1.1) : " << floor(1.1) << endl;
	cout << "floor(2.3) : " << floor(-2.3) << endl;
	cout << "floor(40.5) : " << floor(40.5) << endl;
	cout << "floor(55.7) : " << floor(-55.7) << endl;
	cout << "floor(100.9) : " << floor(100.9) << endl;
	
	cout << "== 소숫점 버리기 ==" << endl;
	cout << "cell(1.1) : " << ceil(1.1) << endl;
	cout << "cell(2.3) : " << ceil(-2.3) << endl;
	cout << "cell(40.5) : " << ceil(40.5) << endl;
	cout << "cell(55.7) : " << ceil(-55.7) << endl;
	cout << "cell(100.9) : " << ceil(100.9) << endl;
	
 	return 0;
}

/*
실수를 버릴때 사용하는 함수 : floor()
floor 함수로 5개 실수의 소수점을 버리고 출력한다.
양수라면 소수점만 버려지지만 음수라면 원래 실수보다 작은 수를 돌려주기 때문에 -2.3은 -3, -55.7은 -56으로 표시된다.
소수점을 버리면 값이 더 작아져야 한다는 점 기억하기.

실수의 소수점을 무조건 올릴 때 사용하는 함수 : ceil()
ceil 함수로 5개 실수에 소수점이 있다면 무조건 올린다.
양수라면 소수점이 있을 때 1 증가하고, 음수라면 원래 실수보다 큰 수를 돌려주기 때문에 -2.3은 -2, -55.7은 -55로 표시된다. 
소수점을 올리면 값이 더 커진다는 점 기억하기.
*/
