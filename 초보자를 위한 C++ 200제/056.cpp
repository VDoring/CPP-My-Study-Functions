//056
//문자열 대소문자 변환하기(toupper, tolower) [!] 
#include <iostream>
#include <string>
#include <algorithm> //transform()함수를 사용하기 위함 

using namespace std; 

int main() {
	string silla = "divided into the Three kingdoms.";
	string joseon = "Yi Seong-gye, established Joseon in 1392.";
	
	//문자열 전체를 대문자나 소문자로 변환하는 transform()함수를 이용한다.
	//문자열 뒤에 붙은 begin은 처음 위치, end는 마지막 위치를 의미한다.
	//함수 인자: (복사할 문자열의 시작점, 복사할 문자열의 종료점, 복사할 문자열의 시작점(다른 문자열 변수에 대입할 수 있음), 대문자로 변환하려면 toupper 소문자로 변환하려면 tolower 사용.)
	transform(silla.begin(), silla.end(), silla.begin(), toupper);
	transform(joseon.begin(), joseon.end(), joseon.begin(), tolower);
	
	char lower_ch = 'g';
	char upper_ch = 'B';
	
	//하나의 문자를 변환할떄 toupper 또는 tolower함수를 호출하여 리턴값을 변수에 대입한다. 
	//반환값은 대문자 또는 소문자로 변환한 결과 값이다. 
	lower_ch = toupper(lower_ch);
	upper_ch = tolower(upper_ch);
	
	cout << "문자열 대문자로 변환 : " << silla << endl;
	cout << "문자열 소문자로 변환 : " << joseon << endl;
	cout << "문자 대문자로 변환 : " << lower_ch << endl;
	cout << "문자 소문자로 변환 : " << upper_ch << endl;
	
	return 0;
}
