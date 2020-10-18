//196
//Json ���Ͽ� ���� ����(Value, StyledWriter)
#include <string>
#include <fstream>
#include <iostream>
#include "json/json.h" //�ռ� �忡�� �����Ͽ� ������ json ������ include�Ѵ�.

using namespace std;
using namespace Json;

int main()
{
	ofstream json_file; //json ������ �����ϱ� ���� ofstream�� �̿��Ѵ�.
	json_file.open("json_exam.json"); //���� �̸��� json_exam.json���� �����Ѵ�.

	Value main; //jsoncpp�� Value�� �̿��� ��ҵ��� �����Ѵ�.
	main["Job1"] = "developer"; //Job1 �̸��� ���� developer�̴�.
	main["Job2"] = "author"; //Job2 �̸��� ���� author�̴�.

	Value sub1; //���ο� json ������Ʈ�� �����Ѵ�.
	sub1["Sub1"] = "Sub1";
	sub1["Sub2"] = "Sub2";
	sub1["Subitems"] = sub1; //���� �߰��� ������Ʈ sub1�� main�� �߰��Ѵ�. ������Ʈ�� ���ο� ������Ʈ�� ������ �� �ִ�. �� ��� main�� �θ� Ʈ���� �ǰ� sub1�� �ڽ� Ʈ���� �ȴ�.

	main["Sub3"] = "blogger"; //main ������Ʈ�� ���ο� ���� �߰��Ѵ�.

	Json::StyledWriter writer; //StyleWriter�� Value�� ����ϵ��� ���´�. Write �Լ��� �̿��� ���ڿ��� ��ȯ�Ͽ� 29�� ���ο��� ����Ѵ�. �� ������ �ֿܼ� ��µǴ� ���ڿ��� ��� �������� ���Ͽ� ���� ���� ���� �ƴϴ�.
	string str = writer.write(main);
	std::cout << str << std::endl << std::endl;

	json_file << writer.write(main); //StyleWriter�� �̿��Ͽ� ���Ͽ� json��Ҹ� ����.
	json_file.close();

	return 0;
}

/*
���)

{
	"Job1" : "developer",
		"Job2" : "author",
		"Job3" : "blogger",
		"Subitems" : {
			"Sub1" : "Sub1",
			"Sub2" : "Sub2"
	}
}

*/
/*
json Ȯ���ڴ� ���־� ��Ʃ������� �� �� �ִ�. ���� ������ ������ ���־� ��Ʃ����� �巡���Ͽ� ������ Ȯ���� ����.
*/

/*
json�� �������� ���� ���Ǹ� ��Ʈ��ũ, �ø��� ���, ����, �Ӻ���� �� �پ��� �о߿��� �� �а� ���ǰ� �ִ�.
json ������ ������ ���, �о߸� �����ϴ� ǥ�� �����̶� ��� �о�, ��� �������� �����ϰ� ����� �� �ִ�.
*/

/*
C++ Jsoncpp ���̺귯���� ���־� ��Ʃ��� 2003 ���� ������ �����Ѵ�.
Json::Value�� ANSI ���� ���ڿ��� ó���� �� �־� �ѱ��� �ٷ� ���� �ټ� ������ ���� �ִ�.
�ѱ��� ����Ѵٸ� Adapt Ŭ������ �߰��Ͽ� ������ ���ߴ� ������ �ʿ��ϴ�. �ٸ� ���⼭�� �ٷ��� �ʴ´�.

���� Jsoncpp�� Json ��ü�� ũ�ν� �÷����� �����ϱ⿡ ���̺귯���� ũ�ν� �÷��� ���� �ҽ� ���·� �����Ǿ���.

���� C#�� �ٷ�ٸ� Newtonsoft���� �����ϴ� Json.NET�� ����ϴ� ���� ���ϴ�.
*/