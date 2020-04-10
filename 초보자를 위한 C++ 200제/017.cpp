//017
//문자열형 변수 이해하기(string)
#include <string> //문자열 사용 위한 string 표준 해더 선언
#include <iostream>

using namespace std;

int main() {
	//string 변수에 초깃값 대입
	string my_country = "Korea";
	string my_job = "developer";

	cout << "Country : " << my_country << endl;
	cout << "Job : " << my_job << endl;
	
	string my_info = my_country + ", " + my_job; //두 변수와 , 를 이용하여 새로운 문자열을 만든다.
												//C언어에서는 strcat()을 사용.

	cout << "My info : " << my_info << endl;

	return 0;

}

/*
C언어에선 문자열을 사용하기 위해 char 배열(char [])를 사용하지만, C++의 string이 다루기 더 편하다.
뭏혼 C++에서도 char을 사용할 수는 있다.

(C언어에서는 문자열 수정시 malloc()등을 사용해 문자열 복사, 추가, 삭제 작업 등을 수행했다.
이 작업을 수행하려면 문자열의 크기, 문자열 끝의 null, 유니코드, 멀티바이트 상황 등 고려할 것이 많았다.
C++에서 제공하는 string은 '+'등을 활용해 직관적으로 문자열을 가공하여 쉽게 사용할 수 있다.)
*/