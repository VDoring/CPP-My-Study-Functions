//093
//������ �� ���ھ� �б�(ifstream, get)
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream read; //ifstream�� �̿��� ���� ������ �����Ѵ�.

	read.open("093.txt", ifstream::in); //ifstream::in�� ���� ���� �ǹ��̴�.

	char line = read.get(); //������ ù ���� �� ���� �д´�.

	while (read.eof() == false) //eof�� End Of File�� �����̴�. ������ ������ ���� �ʾҴٸ� while���� ��� �ݺ��ȴٴ� �ǹ��̴�.
	{
		cout << line; //�� ���ھ� ���

		line = read.get();
	}

	cout << endl;

	read.close(); //������ �� �о��ٸ� close �Լ��� �̿��� �����ߴ� ������ �ݴ´�.
	              //���� ������ ���� �ʴ´ٸ� �ش� ������ �ٸ� ���μ����� ������ ���°� �����Ǳ� ������ ������ ������ ���� ������ �� ����.

	return 0;
}