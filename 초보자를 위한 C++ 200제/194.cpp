//194
//문자열의 모든 단어 찾기(regex_iterator)
#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main()
{
	string str = "Jolbon Buyeo was the predecessor to Goguryeo, and in 538, Baekje renamed itself Nambuyeo (South Buyeo)"; //이 문자열에서 단어를 찾는다. 숫자가 포함되지 않고 오직 문자로만 이뤄진 것을 단어라 판단하여 찾아낸다.

	regex re("([A-Za-z]+)"); //대문자와 소문자를 모두 포함했기 때문에 모든 알파벳을 의미한다. 특수문자, 숫자 등은 별도로 선언하지 않아 오로지 영문으로 이뤄진 문자열만 단어로 인식한다. 만약 ab12cd라는 문자열이 있다면, ab와 cd를 분리하여 단어 2개로 인식한다.

	auto start = sregex_iterator(str.begin(), str.end(), re); //sregex_iterator는 문자열의 처음과 끝을 분리하여 내부에 보유하는 반복자이다. 내부적으로 정규표현식과 일치하는지, 일치하는 지점의 인덱스는 어디인자도 보유하고 있다.
	auto end = sregex_iterator(); //만약 별도의 인자가 없다면 무조건 end위치를 가리키게 된다.

	cout << "== 단어 개수 : " << distance(start, end) << " ==" << endl; //distance 함수를 이용해 start와 end 반복자 값을 비교하여 단어 개수를 출력한다. start 위치에서 end 위치까지의 거리가 곧 개수가 된다.

	for (sregex_iterator i = start; i != end; ++i) //position은 단어의 시작 위치, str은 문자열 값이다. sregex_iterator도 일반적인 iterator와 똑같은 방법으로 사용할 수 있다.
		cout << i->position() << ", " << i->str() << endl;

	return 0;
}

/*
이 예제에서 사용할 메타 문자)

A-Z : A부터 Z까지의 모든 문자(대문자)
a-z : a부터 z까지의 모든 문자(소문자)
+   : 앞의 메타 문자가 1번 이상 반복된다.

*/