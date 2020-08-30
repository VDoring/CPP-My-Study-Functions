//113
//��ü���� ĸ��ȭ �����ϱ�(Encapsulation)
#include <iostream>
#include <string>

using namespace std;

class KingInfo
{
public:
	KingInfo() { };

public:
	void SetValue(const string name, const string son, int ascend) //�������� ������ �ٷ� ������ �� ���� Ŭ���� ������ ���� set�Լ��� �����Ѵ�.
	{
		name_ = name;
		son_ = son;
		ascend_ = ascend;
	}

	string GetNameSon() const //���� ���� ��ȣ�� �Ƶ� �̸��� �ñ��ϴٸ� 24�� ����ó�� �� ������ �̿��� ������� ���� �� �ִ�.
	{
		return name_ + "�� �Ƶ� " + son_;
	}

	string GetNameAscend() const //23�� ���ΰ� ������ ����� �ϴ� �Լ��̴�. ĸ��ȭ�� ��ó�� ����ڰ� ���ϴ� ���·ε� ������ ������ ����� �������� ������ ����� �� �ִ�.
	{
		return name_ + " ���� ���� " + to_string(ascend_) + "��";
	}

private:
	string name_;
	string son_;
	int ascend_;
};

int main()
{
	KingInfo king_info; //Ŭ���� ��ü�� �����Ͽ� �����ڿ� ���� 3���� �����Ѵ�.
	king_info.SetValue("����", "���ر�", 1567);

	//��� ����� ���� ��� ����� �ٸ���. �ν�ȭ�� ������ ��� ����� ���� ����� ������ ���̴�.
	cout << king_info.GetNameSon() << endl;
	cout << king_info.GetNameAscend() << endl;

	return 0;
}

/*
ĸ��ȭ�� ������ �뵵�� ����� �����͵��� ��� �ѵ� �̿��ϴ� ���̴�.
����� �뵵���� ��Ƶθ� �ڵ� ��Ȱ�뼺�� �������� �������е� �̷������ ������ �ִ�.
*/