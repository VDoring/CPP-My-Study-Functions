//105
//Ŭ���� ������ �����ϱ�
#include <iostream>
#include <string>

using namespace std;

class KingInfo
{
public:
	KingInfo() //class �����ڸ� �����Ѵ�. name_������ 26�� ���ο��� ��ü�� ������ �� 11�� ����ó�� �ʱ�ȭ�ȴ�.
	{
		name_ = "���� ���� ��Ȳ";
	}

public:
	string GetName() const
	{
		return name_;
	}
private:
	string name_;
};

int main()
{
	KingInfo king_info;

	cout << king_info.GetName() << endl;

	return 0;
}

/*
�����ڴ� Ŭ���� ��ü�� ������� �� �ڵ����� ȣ��ȴ�.
������ �̸��� Ŭ���� �̸��� �Ȱ����� ���ϰ��� ���ڴ� ���� ����, ���� ���� �ִ�.
*/