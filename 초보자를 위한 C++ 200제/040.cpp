//040
//반복문을 아용하여 구구단(15단) 출력하기 
#include <iostream>

using namespace std;

int main()
{
	int offset = 0;
	
	for(int i = 1; i <= 15; i+= offset) //구구단 15단 설정 
	{
		for(int j = 1; j <= 9; j++) //각 단은 9단까지 표현 
		{
			cout << i << " * " << j << " = " << i * j;
			
			for(int k = 0; k < offset; k++) //offset까지만 반복(단을 의미함) 
			{								//위의 i와 j의 값은 순회할수록 1씩 증가한다. (첫 순회: 1단까지, 다음 순회: 2단,3단, 그 다음 순회: 4단,5단 ,...반복)
				cout << "\t";
				cout << (i + k + 1) << " * " << i << " = " << (i + k + 1) *j; //9까지 곱한 값을 순차적으로 출력한다 
			}
			cout << endl;
		}
		cout << endl;
		
		offset++; //무한 루프 방지용(offset변수를 증가시켜야 1단에서 2단, 2단애서 3단으로 변환된다) 
	}
			
	return 0;
}
