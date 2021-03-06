//053
//문자열 비교하기(string.compare) 
#include <iostream>

using namespace std; 

int main() {
	//문자형 변수 선언 
	string seven_war = "임진왜란";
	string korea_war = "한국전쟁";
	
	//문자열을 비교할 때는 compare()함수를 이용한다.
	//비교할 문자열에 compare()함수를 호춣마고 인자로 다른 문자열을 남기느네, 이떄 값이 서로 같으면 0 , 다르면 -1이 리턴된다. 
	if(seven_war.compare(korea_war) == 0)
		cout << "같은 문자열입니다\n";
	else
		cout << "다른 문자열입니다\n";
	
	return 0;
}

/*
C++에서는 string이 클래스 형태로 제공되기 때문에 유용한 함수를 많이 사용할 수 있다. 
*/
