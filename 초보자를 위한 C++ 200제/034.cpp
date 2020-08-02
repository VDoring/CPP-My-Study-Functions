//034
//중첩 순환문 이해하기(for~continue~break) 
#include <iostream>

using namespace std;

int main()
{
	int number = 7;
	
	for(int i = 0; i < 10; i++) {
		if(i % 3 == 0) //i가 3의 배수라면 반복문 재진입 
			continue;
		else if(i == number) //i가 number일시 반복문 종료 
			break;
		else
			cout << "현재 i 값 : " << i << endl;
	}
	
	return 0;
}
