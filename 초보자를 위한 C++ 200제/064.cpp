//064
//���ڿ��� ���ڷ� ��ȯ�ϱ�(stringstream)
#include <iostream>
#include <sstream> //stringstream �� ����ϱ� ���� include.

using namespace std;

int main() {
	stringstream ss; //stringstream ���� ����

	double number1 = 0.0;

	ss << "1.2,2.6-3.8!4.7=8.9"; //stringstream ������ �Ǽ��� Ư�����ڷ� �̷���� ���ڿ��� �߰�.

	cout << "== string to double ==" << endl;
	while (!ss.eof()) //stringstream�� �� ���� �ʾ����� �ݺ��ȴ�.
	{
		ss >> number1; //ss�������� ���ڸ� �о� �Ǽ��� ���� number1�� �Ҵ��Ѵ�.
		ss.ignore(); //while������ ss�� ó�� �����͸� �а� �ٽ� ó������ ���ư� �����͸� �б� ������ �߰��� ignore�� ȣ���Ͽ� ���� �����͸� ���� �� �ֵ��� �Ѵ�.
		             //���� ignore�� ȣ������ �ʴ´ٸ� ù �����͸� ��� �б� ������ ���ѷ����� ������.

		cout << number1 << ", ";
	}

	ss.clear(); //���� ���¸� �����Ѵ�. (���� ss������ ������ ������ ���� ����. ��, �� ���� �� ���� ����.)
	ss.str(""); //ss ������ �����͸� �ʱ�ȭ�Ѵ�.
	ss << "1, " << "2" << 3 << " " << 4; //ss������ ������ �߰��Ѵ�. ss������ �߰��Ǵ� ���ڿ� �����ʹ� "1,23 4"�̴�.

	int number2 = 0;

	cout << endl << "== string to int ==" << endl;
	while (!ss.eof())
	{
		ss >> number2;
		ss.ignore();

		cout << number2 << ", ";
	}

	return 0;
}