//088
//����ü ����ϱ�(struct)
#include <iostream>
#include <string>

using namespace std;

//struct Ű���带 ����� ����ü�� �����Ѵ�.
struct Princess
{
	//����ü�� �����ϴ� ���.
	string name;
	string father;
	string birthday = "�� �� ����"; //�̸� �����͸� �ʱ�ȭ�� �� �ִ�.
} Goryeo[2]; //����ü�� �迭�� ����� �� �ְ� �̸� ������ ������ �� �ִ�.

int main()
{
	//����ü ������ �����ϰ� ����ü ���� �����Ϳ� ���ο� ���� �Ҵ��Ѵ�.
	//Goryeo ������ ������� �ʰ� ���� �Լ����� ������ ���� �߰��� ����Ѵ�.
	Princess jungmyung;
	jungmyung.name = "�������";
	jungmyung.father = "���� ����";
	jungmyung.birthday = "1603�� 6�� 27��";

	//�̸� ����� �迭 ������ ����Ͽ� �����͸� �����Ѵ�. (���⼱ Goryeo ����)
	Goryeo[0].name = "��������";
	Goryeo[0].father = "��� ����";
	Goryeo[1].name = "ȿ������";
	Goryeo[1].father = "��� ����";

	//jungmyung�� ��� �����͸� ����Ѵ�.
	cout << "== ���� ���� ==" << endl;
	cout << jungmyung.name << endl;
	cout << jungmyung.father << endl;
	cout << jungmyung.birthday << endl << endl;

	//Goryeo�� ��� �����͸� ����Ѵ�.
	cout << "== ��� ���� ==" << endl;
	cout << Goryeo[0].name << endl;
	cout << Goryeo[0].father << endl;
	cout << Goryeo[0].birthday << endl << endl;
	cout << Goryeo[1].name << endl;
	cout << Goryeo[1].father << endl;
	cout << Goryeo[1].birthday << endl;

	return 0;
}

/*
����ü�� ���� ������ Ÿ�Ե��� �ѵ� ���� ����� �� �ִ� ������ ������ �����̴�.
C������ Ŭ���� ������ ���� ������ �ַ� ����ü�� �̿��� �����͸� ���� �� �����ϴ� �뵵�� ���� ����Ѵ�.
�ϳ��� ������ �´� ���� ������ Ÿ���� �ѵ� ���� ����� �� �ֱ� ������ �ſ� ���ϱ� �����̴�.

C++���� Ŭ���� ������ �ֱ� ������ ����ü�� ������� ����� ���嵵 ������, ���α׷��ӵ� ���̿����� �ǰ��� �к��� �κ��̱� ������ �����ϰڴ�.
*/