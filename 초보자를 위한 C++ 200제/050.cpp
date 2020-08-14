//050
//무작위로 문자열과 배열 섞기(random_shuffle) 
#include <iostream>
#include <random>
#include <algorithm>
#include <ctime>

using namespace std;

int main() {
	string str1 = "1a2b3c4d5e6f7g8h9i";
	string str2 = "republic of korea";
	int data1[10] = {1,2,3,4,5,6,7,8,9,10};
	
	srand(static_cast<unsigned int>(time(NULL)));
	
	//문자와 숫자가 섞인 문자열과 문자로만 이루어진 문자열을 재배치한다.
	//string변수의 begin은 첫 위치, end는 마지막 위치를 의미한다. 즉 문자열 전체를 재배치 범위로 설정한다는 뜻이다. 
	random_shuffle(str1.begin(), str1.end());
	random_shuffle(str2.begin(), str2.end());
	
	//data1 + 4는 data1의 인덱스 0~3까지만 무작위로 재배치한다는 의미이다. 
	random_shuffle(data1, data1 + 4);
	
	//무작위로 재배치한 결과를 출력한다. 
	cout << "== str1 ==" << endl;
	for(auto i : str1)
		cout << i << ", ";
		
	cout << endl << "== str2 ==" << endl;
	for(auto i : str2)
		cout << i << ", ";
	
	cout << endl << "== data1 ==" << endl;
	for(auto i : data1)
		cout << i << ", ";
		
	return 0;
}
