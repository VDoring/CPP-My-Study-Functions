//102
//���� ���� ���� Ȯ���ϱ�(good)
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream stream; //ifstream ��ü ����
	stream.open("C:\\BOOTNXT"); //���� ����

	//���� open �Լ��� ���ڷ� ���� ���� ��ΰ� �Ǵٸ� ifstream�� ���������� ������ ������. ��ȯ���� true.
	//������ ������ �������� �ʴٸ� ���� ���� �������� ���� ������ �߻����� ���̴�. ��ȯ���� false.
	if (stream.good() == true)
		cout << "������ �����մϴ�" << endl;
	else
		cout << "������ �������� �ʽ��ϴ�" << endl;

	stream.close(); //������ ��� �Ŀ��� close�Լ��� ȣ���� �����Ѵ�.

	return 0;
}