//200
//Json ��� ũ�� Ȯ���ϱ�(size)
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

	cout << "Root ũ�� : " << value.size() << endl; //json_exam3.json ���Ͽ��� Array, IsJson, Title ������Ʈ�� �־ ũ��� 3�̴�.
	cout << "Array ũ�� : " << value["Array"].size() << endl; //Array ���ο��� Number ������Ʈ�� �־ ũ��� 1�̴�.
	cout << "Number ũ�� : " << value["Array"]["Number"].size() << endl; //Number ���ο��� No1, No2 ������Ʈ�� �־ ũ��� 2�̴�.

	return 0;
}

/*
�ռ� �������� ���� json ������ �����Ͽ� ũ�⸦ Ȯ���Ѵ�.
*/

/*
���)

Root ũ�� : 3
Array ũ�� : 1
Number ũ�� : 2
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