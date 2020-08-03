//036
//순환문으로 홀수, 짝수 찾기(for) 
#include <iostream>

using namespace std;

int main()
{
	int data[10] = {5,19,76,3,10,89,54,43,2,17}; //(숫자는 무작위로 뽑은것이다) 
	
	for(int i = 0; i < 10; i++) {
		if(data[i] % 2 == 0) //짝수일시 
			cout << i << "번쨰 : " << data[i] << "는 짝수입니다" << endl;
		else
			cout << i << "번쨰 : " << data[i] << "는 홀수입니다" << endl; 
	}
	
	return 0;
}
