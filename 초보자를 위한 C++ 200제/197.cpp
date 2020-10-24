//197
//Json 파일 내용 읽기(Reader.parse)
#include <fstream>
#include <iostream>
#include "json/json.h"

using namespace std;
using namespace Json;

int main()
{
	ifstream json_dir("json_exam.json"); //앞에서 만든 json_exam.json 파일을 읽는다.
	Reader reader; //json 파일을 읽을 떈 Reader를 이용하며,
	Value value; //읽은 데이터는 value에 저장한다.

	bool is_parse = reader.parse(json_dir, value); //유효한 json 파일이라면 true를 반환한다.

	if (is_parse == true) //유효한 json 파일을 읽었다면 20,21번처럼 이름에 맞는 값을 출력한다. 만약 이름 값이 잘못되었다면 null이 출력된다. json 파일의 오브젝트는 배열을 사용할 때처럼 []를 이용한다.
	{
		cout << "Job1 : " << value["Job1"] << endl;
		cout << "SubItems Sub1 : " << value["SubItems"]["Sub1"] << endl;
	}
	else
	{
		cout << "Json 파일을 읽을 수 없습니다." << endl;
	}

	return 0;
}

/*
결과)

Job1 : "developer"
SubItems Sub1 : "Sub1"
*/

/*
C++에서 사용할 수 있는 json 라이브러리에는 Jsoncpp, RapidJson, JSON Spirit, cJSON 등이 있다.
Qt는 QJson이 있었지만 Qt5부터 기본 라이브러리로 포함되었다.
여러 Json 라이브러리를 사용하며 장단점을 파악하는 것도 추천한다.
*/