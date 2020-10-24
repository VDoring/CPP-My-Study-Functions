//197
//Json ���� ���� �б�(Reader.parse)
#include <fstream>
#include <iostream>
#include "json/json.h"

using namespace std;
using namespace Json;

int main()
{
	ifstream json_dir("json_exam.json"); //�տ��� ���� json_exam.json ������ �д´�.
	Reader reader; //json ������ ���� �� Reader�� �̿��ϸ�,
	Value value; //���� �����ʹ� value�� �����Ѵ�.

	bool is_parse = reader.parse(json_dir, value); //��ȿ�� json �����̶�� true�� ��ȯ�Ѵ�.

	if (is_parse == true) //��ȿ�� json ������ �о��ٸ� 20,21��ó�� �̸��� �´� ���� ����Ѵ�. ���� �̸� ���� �߸��Ǿ��ٸ� null�� ��µȴ�. json ������ ������Ʈ�� �迭�� ����� ��ó�� []�� �̿��Ѵ�.
	{
		cout << "Job1 : " << value["Job1"] << endl;
		cout << "SubItems Sub1 : " << value["SubItems"]["Sub1"] << endl;
	}
	else
	{
		cout << "Json ������ ���� �� �����ϴ�." << endl;
	}

	return 0;
}

/*
���)

Job1 : "developer"
SubItems Sub1 : "Sub1"
*/

/*
C++���� ����� �� �ִ� json ���̺귯������ Jsoncpp, RapidJson, JSON Spirit, cJSON ���� �ִ�.
Qt�� QJson�� �־����� Qt5���� �⺻ ���̺귯���� ���ԵǾ���.
���� Json ���̺귯���� ����ϸ� ������� �ľ��ϴ� �͵� ��õ�Ѵ�.
*/