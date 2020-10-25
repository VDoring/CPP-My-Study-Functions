//198
//Json 배열처럼 읽고 쓰기(append)
#include <fstream>
#include <iostream>
#include "json/json.h"

using namespace std;
using namespace Json;

int main()
{
	ofstream json_write;
	json_write.open("json_exam2.json"); //새로운 파일인 json_exam2.json을 생성한다.

	Value root
	root["Title"] = "Array Exam"; //Title 오브젝트를 추가한다.

	Value array1; //Value 변수에 append 함수를 이용하여 Json 배열 요소 2개를 생성한다.
	array1.append("C#");
	array1.append("C++");

	Value array2;
	array2.append("Q#");
	array2.append("Qt");

	root["Language"]["Sample1"] = array1; //Language 오브젝트의 값으로 배열 2개를 추가한다.
	root["Language"]["Sample2"] = array2;

	json_write << root; //그리고 root value를 파일에 쓰고 닫는다.
	json_write.close();

	ifstream json_open("json_exam2.json"); //위에서 생성한 파일을 열고 json 파일 내용을 value 변수에 담는다.
	Reader reader;
	Value value;
	reader.parse(json_open, value);

	cout << value << endl << endl;

	for (auto i : value["Language"]["Sample1"]) //for문을 이용하여 Language 오브젝트의 배열 중 Sample1 요소만 출력한다. 이렇게 Value를 배열처럼 다루게 되면 코드가 직관적이라 소스만으로도 트리를 유추하기 수월해진다.
		cout << "Language Sample1 : " << i << endl;

	return 0;
}

/*
결과)

{
	"Language" :
	{
		"Sample1" :
		[
			"C#",
			"C++"
		],
		"Sample2" :
		[
			"Q#",
			"Qt"
		]
	},
	"Title : Array Exam"
}

Language Sample1 : "C#"
Language Sample1 : "C++"

*/