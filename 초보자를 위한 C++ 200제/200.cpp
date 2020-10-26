//200
//Json 요소 크기 확인하기(size)
#include <fstream>
#include <iostream>
#include "json/json.h"

using namespace std;
using namespace Json;

int main()
{
	ifstream json_open("json_exam3.json");
	Reader reader;
	Value value;
	reader.parse(json_open, value);

	cout << "Root 크기 : " << value.size() << endl; //json_exam3.json 파일에는 Array, IsJson, Title 오브젝트가 있어서 크기는 3이다.
	cout << "Array 크기 : " << value["Array"].size() << endl; //Array 내부에는 Number 오브젝트만 있어서 크기는 1이다.
	cout << "Number 크기 : " << value["Array"]["Number"].size() << endl; //Number 내부에는 No1, No2 오브젝트가 있어서 크기는 2이다.

	return 0;
}

/*
앞선 예제에서 만든 json 파일을 참고하여 크기를 확인한다.
*/

/*
결과)

Root 크기 : 3
Array 크기 : 1
Number 크기 : 2
json_exam3.json

*/

/*
json_exam3.json

{
	"Array" :
	{
		"Number" :
		{
			"No1" : 12,
			"No2" : 20.300000000000001
		}
	},
	"IsJson" : true,
	"Title" : "Convert Exam"
}

*/