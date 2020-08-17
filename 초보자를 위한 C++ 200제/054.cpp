//054
//문자열 조회하기(find) 
#include <iostream>
#include <string>

using namespace std; 

int main() {
	string baekhap_war = "백합벌 전투 : 백제 왕자 부여창의 일기토로 유명한 전투";
	
	//문자열 뒤에 find 함수를 호출하여 찾고자 하는 임의의 문자 또는 문자열을 입력한다.
	//만약 찾지 못했다면 -1이 리턴되고, 찾았다면 문자 또는 문자열의 시작 위치가 리턴된다. 
	int rtn = baekhap_war.find("부여창");
	
	if(rtn > 0)
		cout << "문자열을 찾았습니다. 위치는 " << rtn << "입니다." << endl;
	else
		cout << "문자열을 찾을 수 없습니다." << endl;

	return 0;
}
