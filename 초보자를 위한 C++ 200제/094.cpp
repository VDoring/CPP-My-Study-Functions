//094
//������ �� �پ� �б�(ifstream, getline)
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream file; //���� ����
	file.open("093.txt", ifstream::in); //���� ���

	string line;

	while (getline(file, line)) //getline�Լ��� �̿��Ͽ� �� �پ� �о� line ������ �����Ѵ�. ���پ� �дٰ� �� ������ ���ԵǸ� while���� ����ȴ�.
		cout << line << endl; //������ ����� ���� ������ ����Ѵ�.

	file.close();

	return 0;
}