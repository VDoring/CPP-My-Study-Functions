//035
//순환문으로 특정 문자 개수 구하기(for) 
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str = "The jin state was formed in southern Korea by the 3rd century BC";
	
	char find = 'a';
	
	int size = str.size();
	//문자열 str의 크기만큼 반복해야 하기 때문에 미리 str의 크기를 구한다. 
	//size(str)이 될 수는 없다. 변수와 함수의 이름이 겹쳐 호출에 문제가 생긴다.
	int count = 0;
	
	for(int i = 0; i < size; i++)
	{
		if(str[i] == find)
			count++;	
	}
	
	cout << "문장중 a의 갯수는 " << count << "개 입니다" << endl;
	
	return 0;
}
