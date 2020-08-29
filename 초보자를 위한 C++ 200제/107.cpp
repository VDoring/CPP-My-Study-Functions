//107
//Ŭ���� default ������(default)
#include <iostream>
#include <string>

using namespace std;

class Class1 //��� ���� 3���� �����ϴ� Ŭ������ �����Ѵ�.
{
public:
	Class1() = default; //������ ���� default��� Ű����� Ŭ���� ���� ������ ��� �ʱ�ȭ�Ѵٴ� �ǹ��̴�.
	                    //�������� �⺻ �����ڸ� ���� �����Ͽ� ������ ���� ������ �����ؾ� ������, Ư���� ������ �ʱ�ȭ�� �ʿ䰡 ���� ���� default Ű���带 �̿��ϴ� ���� ���ϴ�.

public:
	int number;
	double prime;
	string word;
};

class Class2
{
public:
	Class2() { }; //Class1�� �����ڿ� �޸� default Ű���带 ������� �ʾҴ�.

public:
	int number;
	double prime;
	string word;
};

int main()
{
	Class1 *class1 = new Class1(); //Class1�� ��ü�� �����Ѵ�. new�� �̿��ϸ� �޸� �� ������ �Ҵ�ȴ�.
	cout << "Class1 : " << class1->number << ", " << class1->prime << ", " << class1->word << endl; //Class1�� ���� ������ ����Ѵ�.

	Class2 *class2 = new Class2(); //Class2�� ��ü�� �����Ѵ�.
	cout << "Class2 : " << class2->number << ", " << class2->prime << ", " << class2->word << endl; //Class2�� ���� ������ ����Ѵ�.

	return 0;
}

/*
�����ڿ� default Ű���带 ����ϸ� Class1�� ��� ���ó�� ���� ������ �ʱ�ȭ�ȴ�.
*/