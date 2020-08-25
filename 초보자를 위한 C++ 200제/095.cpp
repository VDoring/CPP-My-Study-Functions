//095
//���� ������ ��� �б�(stringstream)
#include <iostream>
#include <sstream> //stringstream�� ����ϱ� ���� include
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream ifs("095.txt"); //ifstream�� �̿��� �ؽ�Ʈ ������ ����. ���� ��带 �����ϸ� ifstream::in���� �����ȴ�.

	stringstream ss; //stringstream�� ����.

	ss << ifs.rdbuf(); //ifstream���� ���� ������ ��ü �ؽ�Ʈ ������ stringstream�� �����Ѵ�.
	ifs.close(); //���� ���⸦ ������.

	string read = "";

	cout << "== !ss.eof ==" << endl;

	//ss�� �ؽ�Ʈ�� ������ ���� �ʾҴٸ� while�� �ڵ尡 �ݺ� ����ȴ�.
	//ss�� ����� ���ڿ��� ���������� read ���ڿ� ������ �����ϰ� ����Ѵ�.
	//ss���� read�� �����ϴ� ���ڿ��� ifs�� ���� ���� �ؽ�Ʈ ������ ��������, ���ӵ� ���ڿ��� �� ������ �����Ѵ�.
	//����, Ư������ ���� ������ �������� �ؽ�Ʈ�� �� ������ ó���Ѵ�. �� ������ ���������� read������ ������ �� ����ϴ� ���̴�.
	while (!ss.eof())
	{
		ss >> read;
		cout << read << " ";
	}

	cout << endl << "== !ss.str() ==" << endl;
	read = ss.str(); //�ؽ�Ʈ ������ ����ϴ� �ٸ� ������� stringstream�� ��� �����͸� ���ڿ��� ��ȯ�Ͽ� string������ ���� �� �ִ�. �� ������ �״�� ����ϸ� �ؽ�Ʈ ���� ������ ��� ��µȴ�.

	cout << endl << read << endl;

	return 0;
}