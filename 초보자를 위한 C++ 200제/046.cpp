//046
//몫과 나머지 구하기(%) 
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double x = 5.7; //실수 x 선언 .
	int div1 = static_cast<int>(x / 5); //x를 5로 나눈다. 구하려는 몫은 정수이기 때문에 타입ㄷ 캐스팅을 하여 나머지는 버린다. 
	double mod1 = x - 5 * static_cast<int>(x / 5); //나누려는 수 5와 몫을 곱한다. 그리고 원래 값인 x에서 빼주면 "원래 값 - (나누려는 수 * 몫)의 형태가 되어 나머지를 구할 수 있다. 
	
	int y = 10;
	int div2 = static_cast<int>(y / 2); //정수의 정수를 나눌 떄도 나머지가 발생할 수 있으니 타입캐스팅을 하여 int정수로 변환해 준다. 
	double mod2 = y % 2; //나머지를 구하기 때문에 11번 라인처럼 하지 않는다. 
	
	cout << "5.7 / 5 = 몫 : " << div1 << ", 나머지 : " << mod1 << endl; 
	cout << "10 / 2 = 몫 : " << div2 << ", 나머지 : " << mod2 << endl; 
	
	return 0;
}
