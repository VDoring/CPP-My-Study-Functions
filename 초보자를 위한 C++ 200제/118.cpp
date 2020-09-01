//118
//friend Ŭ���� ����ϱ�(friend)
#include <iostream>
#include <string>

using namespace std;

//Info Ŭ�������� GoodKing Ŭ������ friend�� ������ �� �ֵ��� ���� ������ �Ѵ�.
class GoodKing;
class BadKing;

class Info
{
	friend class GoodKing; //friend Ű���带 �̿��� GoodKing Ŭ������ ���� ������ Ǯ���ش�.
	                       //�̋� friend�� ������ �� �ִ� Ŭ������ ���� ���� �� ���� ������ Ŭ���� �������� ������ ����.

public:
	Info() { };

private:
	string achieve; //private�� ����� string������ public���� Info Ŭ������ ����ص� ������ ������ ����.
};

//�� Ŭ������ ���� ������ �������� �ʾұ� ������ �⺻�� private ���·� Info Ŭ������ ��� �޴´�.
//������ 30,33�� ���ο��� ���̵� friend Ŭ������ ����Ǿ����Ƿ� �����Ӱ� private ������ ������ �� �ִ�.
class GoodKing : Info
{
public:
	GoodKing() { achieve = "���� ���� ���� ���ʰ��"; };
	void Display()
	{
		cout << achieve << endl;
	}
};

class BadKing : public Info //�� Ŭ������ public���� Info�� ��� ������ 43�� ����ó�� private ������ ������ �� ����.
{
public:
	BadKing() {};
	void Display()
	{
		//cout << achieve << endl; //����
	}
};

int main()
{
	GoodKing king1; //friend ���� ���� ����� ���Ѵ�. GoodKing Ŭ������ Info Ŭ������ friend�� ����Ǿ��⿡ private ���� achive�� ������ �� �ִ�.
	                //������ BadKing Ŭ������ private ������ ������ �� ��� 42�� ���ο��� ������ �߻��Ѵ�.
	king1.Display();

	BadKing king2;
	king2.Display();

	return 0;
}

/*
private�� �ܺο��� ������ �� ������ �����ϴ� Ű�����̴�. ������ ���������� Ư�� Ŭ������ ������� �� ���� ������ Ǯ���� �� �ִ�.
*/