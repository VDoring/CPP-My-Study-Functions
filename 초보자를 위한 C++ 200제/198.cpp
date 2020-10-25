//198
//Json �迭ó�� �а� ����(append)
#include <fstream>
#include <iostream>
#include "json/json.h"

using namespace std;
using namespace Json;

int main()
{
	ofstream json_write;
	json_write.open("json_exam2.json"); //���ο� ������ json_exam2.json�� �����Ѵ�.

	Value root
	root["Title"] = "Array Exam"; //Title ������Ʈ�� �߰��Ѵ�.

	Value array1; //Value ������ append �Լ��� �̿��Ͽ� Json �迭 ��� 2���� �����Ѵ�.
	array1.append("C#");
	array1.append("C++");

	Value array2;
	array2.append("Q#");
	array2.append("Qt");

	root["Language"]["Sample1"] = array1; //Language ������Ʈ�� ������ �迭 2���� �߰��Ѵ�.
	root["Language"]["Sample2"] = array2;

	json_write << root; //�׸��� root value�� ���Ͽ� ���� �ݴ´�.
	json_write.close();

	ifstream json_open("json_exam2.json"); //������ ������ ������ ���� json ���� ������ value ������ ��´�.
	Reader reader;
	Value value;
	reader.parse(json_open, value);

	cout << value << endl << endl;

	for (auto i : value["Language"]["Sample1"]) //for���� �̿��Ͽ� Language ������Ʈ�� �迭 �� Sample1 ��Ҹ� ����Ѵ�. �̷��� Value�� �迭ó�� �ٷ�� �Ǹ� �ڵ尡 �������̶� �ҽ������ε� Ʈ���� �����ϱ� ����������.
		cout << "Language Sample1 : " << i << endl;

	return 0;
}

/*
���)

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