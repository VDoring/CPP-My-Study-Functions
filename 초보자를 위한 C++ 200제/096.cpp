//096
//�ؽ�Ʈ�� ���Ͽ� ����(ofstream)
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	const string file_name = "096.txt";

	ofstream file_out; //ofstream���� ������ ���µ� �� ������ ������ ���ٸ� ���� �����Ѵ�. ���� ������ �����ϸ� ���� ������ �����ϰ� ���Ӱ� ���Ͽ� �ؽ�Ʈ�� ����Ѵ�.
	file_out.open(file_name, ifstream::out); //ifstream::out�� ���� ��带 �ǹ��Ѵ�

	//�ش� ���Ͽ� ���ϴ� ������ �Է��Ѵ�.
	file_out << "���� �����հ� Ȳ����" << endl;
	file_out << "����� ������ ��ȭ�� ��" << endl;

	//(������ ������ ���� ���� ����)
	file_out.close();

	ifstream file_in;
	file_in.open(file_name, ifstream::in);

	string line;

	while (getline(file_in, line))
		cout << line << endl;

	file_in.close();

	return 0;
}