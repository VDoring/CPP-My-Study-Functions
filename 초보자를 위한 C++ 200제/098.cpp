//098
//���� ���� ���� Ȯ���ϱ�(exists)
#include <iostream>
#include <filesystem>

using namespace std;
namespace fs = experimental::filesystem;

int main()
{
	//filesystem ���ӽ����̽��� �̿��� fs����, exists �Լ��� ȣ���Ѵ�.
	//���� ����� true, �ƴҽ� false�� ��ȯ�ȴ�.
	//���� ������� ������ ���� ���ε� Ȯ���� �� �ִ�.
	if (fs::exists("c:\\target") == true)
		cout << "������ �����մϴ�" << endl;
	else
		cout << "������ �����ϴ�" << endl;

	return 0;
}

/*
���� ���θ� Ȯ���ϴ� exists�Լ��� C#, Qt ����� ���� �̸����� �����Ѵ�.
*/