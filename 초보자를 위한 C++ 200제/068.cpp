//068
//정수와 문자의 최대/최소값 알아내기(min, max)
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	auto result1 = min(1, 5); //min 함수에 정수 1과 5를 인자를 넘기며 최소 값을 알아낸다.
	                          //자료형 auto는 반환형이 무엇인지 모를 떄 사용할 수 있는 키워드이다.
	auto result2 = max('a', 'z'); //max 함수에 알파벳 a와 z를 넘긴다.
	                              //a에서 z중 가장 나중에 나오는 문자를 알아내는 것으로 아스키 코드 값을 기준으로 반환한다.
	                              //소문자 a는 10진수로 97, z는 122이다.

	cout << result1 << ", " << result2 << endl;

	auto result3 = minmax({ 'a','n','z' }); //minmax 인자로 a,n,z를 넘긴다. a는 아스키 코드로 97, n은 110, z는 122이다.
	auto result4 = minmax({ 1,2,3 }); //minmax 인자로 1,2,3을 넘긴다.

	//auto 키워드로 받은 결과의 first는 최소값, second는 최대값이다.
	cout << result3.first << ", " << result3.second << endl;
	cout << result4.first << ", " << result4.second << endl;

	return 0;
}