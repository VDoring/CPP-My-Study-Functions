//116
//Ŭ���� ���[2] Is-A ����
#include <iostream>

using namespace std;

class Landload //Is-A ���踦 ��Ÿ���� 2���� ������ Ŭ������ �����Ѵ�.
{
public:
	void IamLandload() { cout << "�ǹ����Դϴ�" << endl; }
};

class Tenant //(���⵵)
{
public:
	void IamTenant() { cout << "�������Դϴ�" << endl; }
};

class Nation : public Landload, public Tenant //is-A���踦 ǥ���ϴ� Ŭ������ �����Ѵ�. 33�� ���� is_Landload�� true�ϋ��� false�ϋ� ����� �ٸ���.
{
public:
	void Who()
	{
		cout << "���� ";

		if (is_landload == true)
			IamLandload();
		else
			IamTenant();
	}

public:
	bool is_landload;
};

int main()
{
	Nation nation; //Ŭ���� ��ü�� �����ϰ� is_Landload ������ true�� �Ҵ��� �� ����� ����Ѵ�.
	nation.is_landload = true;
	nation.Who();

	return 0;
}

/*
Has-A ���谡 ������ �Ϲ����� �����̶�� Is-A ����� ������ �����̴�, ������ �� �����̴ٶ�� �ǹ̴�.
�������� �ǹ��ֳ� �����ڴ� �Ϲ� ���� �� �� ����� �� ������ ��� ������ �ǹ����̰ų� �������ϼ��� ����.
�̷� ��� ����� ��ü���� ���α׷����� �ٰ��� �ȴ�.

Ŭ������ �̿��� ���α׷����� �� �� ���� ����� �и��Ͽ� ���� ���� Ŭ������ ��ӵǵ��� �ڵ带 �����ϴ� ���� �ٷ� ��ü���� ���α׷����� �����̴�.
*/