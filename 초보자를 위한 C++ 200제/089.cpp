//089
//����ü�� �Լ� ���ڷ� ����ϱ�
#include <iostream>
#include <string>

using namespace std;

//struct Ű���带 ����� ����ü�� �����Ѵ�. ����ü ���� jungso�� �����Ѵ�.
struct Princess
{
	string name;
	string father;
	string birthday;
} jungso;

//����ü ���ڸ� �����ͷ� �޴� �Լ��̴�.
//����ü�� �Ϲ� ����ó�� �ٷ����� ������ �ּ� ���� ������ & �� ����Ͽ� �ѱ�� �޴� �Լ��� &�� �̿��Ѵ�.
//�������̱� ������ . ��� ->�� ����Ѵ�.
void Print(Princess *who)
{
	cout << "jungso.name = " << who->name << endl;
	cout << "jungso.father = " << who->father << endl;
	cout << "jungso.bitrhday = " << who->birthday << endl;
}

int main()
{
	//�̸� ����� ���� jungso�� ���� �����Ѵ�.
	jungso.name = "���Ұ���";
	jungso.father = "���� ����";
	jungso.birthday = "1412��";

	//jungso�� ��� �����͸� ���.
	Print(&jungso);

	return 0;
}