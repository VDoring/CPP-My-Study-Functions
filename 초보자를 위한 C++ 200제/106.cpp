//106
//Ŭ���� ���� ������ �����ϱ�
#include <iostream>
#include <string>

using namespace std;

class KingInfo
{
public:
	KingInfo() //���ڰ� ���� Ŭ���� �����ڷ� string ������ �ʱ�ȭ�Ѵ�.
	{
		value_ = "���� ���� ����";
	}

	KingInfo(const string value) //���ڷ� ���ڿ��� �޾� string ������ �����Ͽ� �ʱ�ȭ�Ѵ�.
	{
		value_ = value;
	}

	KingInfo(const int value) //���ڷ� ������ �޾� �ٸ� ���ڿ��� �����Ͽ� string ������ �ʱ�ȭ�Ѵ�.
	{
		value_ = "���걺 �������� : ";
		value_ += to_string(value);
	}

public:
	string GetValue() const //���� ���� value_�� ��ȯ�ϴ� public �Լ��� �����Ѵ�.
	{
		return value_;
	}

private:
	string value_;
};

int main()
{
	//Ŭ���� ��ü�� �����Ѵ�.
	//��ü���� ������ �� ���ڸ� �ٸ��� �ξ ���� ȣ���ϴ� �����ڰ� �ٸ���.
	//�� ��ü���� ���� �Լ� GetValue�� ȣ�������� ��ü ���� �� ȣ���� �����ڰ� �ٸ��Ƿ� ��µǴ� ���� �ٸ���.
	KingInfo king_info1;
	KingInfo king_info2("���� ���걺 ����");
	KingInfo king_info3(1494);

	cout << king_info1.GetValue() << endl;
	cout << king_info2.GetValue() << endl;
	cout << king_info3.GetValue() << endl;

	return 0;
}