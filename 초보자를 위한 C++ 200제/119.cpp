//119
//Friend �Լ� ����ϱ�
#include <iostream>
#include <string>

using namespace std;

class Onda1 {
public:
	friend void GetYear(Onda1 onda1) //friend �Լ� GetYear�� �����Ѵ�. friend �Լ��� �ܺο��� ������ �� �־� ��������(ĸ��ȭ)�� ����ȴ�.
	{
		cout << "�̴ܼ� ���� ���� : " << onda1.year_ << endl;
	}

	void SetYear(int year) { year_ = year; } //private ��� ������ �ʱ�ȭ�ϴ� �Լ��̴�.

private:
	int year_;
};

int main()
{
	Onda1 onda1; //Onda1 Ŭ���� ��ü�� ����� ��� ������ 590���� �ʱ�ȭ�Ѵ�.
	onda1.SetYear(590);

	GetYear(onda1); //friend �Լ��� ����Ǿ��� ������ main Ŭ�������� ������ ����� ����� �� �ִ�. ���� friend Ű���带 ����� ������ �߻��Ѵ�.

	return 0;
}

/*
�ܺ��� ��� ������ ����ϴ� friend Ű����� �ſ� ���������� ����ϰų� �ƿ� ������� �ʴ� ���� ����.
���� ����ó�� ���� ���� ����̱� ������ ��� ����� ������ ������� �ʴ� ���� �����Ѵ�.

��ü���� ����� Ư�� �� �ϳ��� ���������� ��Ʈ���� friend Ű����� �ռ� ����ó�� Ŭ������ ������ �� �ְ�, �ϳ��� �Լ����� ������ ���� �ִ�.
*/