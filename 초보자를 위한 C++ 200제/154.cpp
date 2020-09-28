//154
//컨테이너와 배열 복사하기(copy)
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> number1({ 1,2,3,4,5 }); //int 형 벡터를 선언한다. number1은 초기값을 5개 갖고 있지만, number2는 아무 데이터도 갖고 있지 않다.
	vector<int> number2;

	copy(number1.begin(), number1.end(), back_inserter(number2)); //copy 함수의 인자로 컨테이너 number1의 처음 위치와 마지막 위치를 전달한다. 그리고 세번쨰 인자로 number2의 마지막을 의미하는 back_inserter 함수도 호출한다. 여기의 copy 함수를 통해 number1의 모든 데이터가 number2 끝 위치부터 복사된다.

	for (auto i : number2) //복사가 끝난 number2를 출력한다.
		cout << i << endl; //결과는 1,2,3,4,5 이다.

	double number3[5] = { 1.2, 3.4, 4.5, 5.6, 6.77 }; //실수형 배열 2개를 선언한다. number3은 초기 값을 보유하지만 number4는 초기값을 갖지 않는 빈 배열이다.
	double number4[5];

	copy(begin(number3), end(number3), begin(number4)); //13번 라인처럼 컨테이너를 복사하는 방법으로 배열 복사를 시도한다. 21번 라인에서는 number4의 맨 앞 부분부터 복사가 이루어지도록 begin을 호출하여 number4를 인자로 넘긴다. 이를 통해 number4의 맨 앞부분에 number3의 데이터 모두가 추가(복사)된다.

	for (auto i : number4) //복사가 끝난 number4를 출력한다.
		cout << i << endl; //결과는1.2, 3.4, 4.5, 5.6, 6.77 이다.

	return 0;
}

/*
컨테이너나 배열을 복사할 때 copy 함수를 이용하면 손쉽게 해결할 수 있다.
*/