//045
//절대값과 제곱수 구하기(abs, fabs, pow) 
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	cout << "==절대값 구하기==" << endl;
	cout << "-10의 절대값 : " << abs(-10) << endl; // 10 
	cout << "-5.72의 절대값 : " << fabs(5.72) << endl; // 5.72 
	
	cout << endl;
	
	cout << "==제곱수 구하기==" << endl;
	cout << "2의 2승 : " << pow(2,2) << endl; // 4
	cout << "3의 4승 : " << pow(3,4) << endl; // 81
	cout << "4의 6승 : " << pow(4,6) << endl; // 4096
	cout << "8의 3승 : " << pow(8,3) << endl; //512
	
	return 0;
}

/*
abs = absolute value절대값)의 약자. 
정수의 절대값 = abs()로 구함 
실수의 절대값 = fabs()로 구함

하지만 C++에서는 abs로도 실수의 절대값을 구할 수 있으며, Long 자료형은 Labs로 절대값을 구할 수 있다.
해당 함수들은 최소 반환값과 최대 표현 값 등이 다르다. 

*/
