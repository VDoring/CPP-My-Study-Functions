//108
//Ŭ���� ������ �ʱ�ȭ ����Ʈ
#include <iostream>
#include <string>

using namespace std;

class TmpClass //Ŭ���� TmpClass�� �����Ѵ�.
{
public:
	TmpClass() : number1(10), number2(20), name("���� : ���ڸ�� �̸�") {} //Ŭ���� ������ �ʱ�ȭ ����Ʈ���� ������ �ʱ�ȭ�Ѵ�.
	                                                                       //��ǥ�� �̿��� ���� ������ �ʱ�ȭ�� �� �ִ�.
	                                                                       //������ �ʱ�ȭ ����Ʈ������ �����ڰ� ȣ��Ǵ� ������ ���� ���� �����ϱ� ������ ���� ���� �����ϰ� ���ο� ������ �Ҵ�ȴ�.

	void Print()
	{
		cout << number1 << ", " << number2 << ", " << number3 << ", " << name << endl;
	}

private: //Ŭ������ ���� ������ �����ϴµ�, ����� ���ÿ� �ʱ�ȭ�� �� �ִ�.
	int number1 = 1;
	const int number2 = 2;
	static const int number3 = 3;
	string name = "���� : ����� �Ƶ�";
};

int main()
{
	TmpClass tc; //Ŭ���� ��ü�� �����ϰ� public �Լ� Print�� ȣ���Ͽ� ������ ����Ѵ�.
	tc.Print();  //����� �Բ� �ʱ�ȭ�ߴ� �� ��� ������ �ʱ�ȭ ����Ʈ ������ ��µǴ� ���� Ȯ���� �� �ִ�.

	return 0;
}