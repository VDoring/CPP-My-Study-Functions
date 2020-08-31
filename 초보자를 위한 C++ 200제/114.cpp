//114
//��ü���� ��� �����ϱ�(Inheritance)
#include <iostream>
#include <string>

using namespace std;

class Info //�������� ����� ��Ҹ� ���� Info Ŭ������ �����Ѵ�. �ƹ��� ���� ���̶� �ص� ������ ���� ���� ��� �� �Ϻδ� ��ĥ ���ۿ� ����. ��ȣ�� ���� ������ ���� ����̴�.
{
public:
	Info() { };

public:
	string name_;
	int year_;
};

class GoodKing : public Info //Info Ŭ������ ��ӹ޴� ���ο� Ŭ������ �����Ѵ�. Info ��ҵ��� public���� ����Ѵٴ� �ǹ̷� Info �տ� public Ű���带 ���δ�.
{
public:
	GoodKing(const string country) : country_(country) {};
	void Display()
	{
		cout << country_ << " " << name_ << " ���� ���� BC : " << year_ << endl;
	}

private:
	string country_;
};

class BadKing : public Info //Info Ŭ������ ��ӹ޴� ���ο� Ŭ������ �����Ѵ�. ���� Info Ŭ������ �����ٸ� �� Ŭ�������� ���������� 13,14�� ������ �߰��Ǿ� �ߺ� �ҽ��� �þ��. ������ Info Ŭ���� ������� �ڵ� �ߺ��� ���̰� �Ǿ���.
{
public:
	BadKing(const string country) : country_(country) {};
	void Display()
	{
		cout << country_ << " " << name_ << " ���� ���� : " << year_ << endl;
	}

private:
	string country_;
};

int main()
{
	GoodKing king1("������"); //���� �ٸ� Ŭ������ ��ü�� ���������� name_, year_ ��ҿ� ���������� ������ �� �ִ�. GoodKing, BadKing Ŭ���� ���ο��� �� ������ �������� �ʾ����� Info Ŭ������ ��ӹ޾ұ� �����̴�.
	king1.name_ = "�ܱ��հ�";
	king1.year_ = 2333;

	BadKing King2("���");
	King2.name_ = "������";
	King2.year_ = 1330;

	king1.Display();
	King2.Display();

	return 0;
}

/*
�츮 ���� �ӿ��� ������ �հ� ���� ���� �����Ѵ�.
�� �յ��� ������ �� ���������� ��ȣ, ���� ���� ���� ������ �̾߱��Ѵ�.
�ƹ��� ���� ���̶� �ص� ���� ���� ������ �� �̾߱��ϴ� �Ϻ� ��Ҵ� ��ĥ �� �ۿ� ����.

��ü���� ���α׷��ֿ����� �̷��� ��ġ�� ��Ҹ� ���� �ж��Ͽ� ����Ѵ�.
��ġ�� ��Ҹ� �Ź� �����ϴ� �� ���� �� ��ҵ��� �̸� ������ �ΰ� �ٸ� Ŭ�������� �� Ŭ������ ��ӹ޾� ����ϴ� ���̴�.
*/