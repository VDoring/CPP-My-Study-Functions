//103
//���� ũ�� Ȯ���ϱ�(file_size)
#include <iostream>
#include <filesystem>

using namespace std;
namespace fs = experimental::filesystem;

int main()
{
	int size = fs::file_size("103.txt"); //file_size �Լ��� ����Ѵ�. ���ڴ� ������ ����̴�. ���� ��ü ��θ� �Է����� �ʴ´ٸ� �ش� ������Ʈ ������ ������ ���� �ȴ�.

	cout << "���� ũ�� : " << size << "����Ʈ" << endl;

	return 0;
}