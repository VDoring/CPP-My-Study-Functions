//147
//tuple ����ϱ�(tie)
#include <iostream>
#include <tuple>
#include <string>

using namespace std;

int main()
{
	typedef tuple<string, int, double> Data; //typedef�� �̿��� tuple�� �����Ѵ�. Data Ʃ���� string, int, double���� 3���� �ڷ����� �����Ѵ�.

	Data data1("���ڿ�", 10, 1.2); //Ʃ�� Data�� ��ü�� ����� ���� �ʱ�ȭ�Ѵ�.

	string my_str = "";
	int my_int = 0;

	tie(my_str, my_int, ignore) = data1; //tie �Լ��� �����ϸ� my_str, my_int, ignore�� ���ڷ� �����Ѵ�.
	                                     //my_str�� Ʃ���� ù ���� �������� string "���ڿ�"�� ����ǰ�, my_int���� �� ���� ������ int 10�� ����ȴ�. ignore�� ���� �������� ���� �� �Է��Ѵ�.
	                                     //����� ���ڿ�, 10 �̴�.

	cout << my_str << ", " << my_int << endl;

	return 0;
}
