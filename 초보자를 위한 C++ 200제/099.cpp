//099
//���� ���� ��� Ȯ���ϱ�(directory_iterator)
#include <iostream>
#include <filesystem>
#include <string>

using namespace std;
namespace fs = experimental::filesystem;

int main()
{
	string directory = "C:\\Program Files"; //��ȸ�� ���� �̸��� ������ �����Ѵ�. \\�� ��θ� ��Ÿ���� ���� ����Ѵ�.

	//�ڷ��� auto�� �ڷ����� �̸� ���س��� �ʰ� ������ �ܰ迡�� �����ִ� ���̴�. �ڷ����� ��Ȯ���� �ʰų� ũ�Ⱑ �������� ������ ����ϸ� ������ �����ϸ� �ڷ��� ��ġ�� �����ʾ� ���������� ���������.
	//filesystem����� directory_iterator �Լ��� ȣ���Ѵ�. �� �Լ��� ���ڷ� �޴� ���丮�� ó���� ���� ��ȸ�Ͽ� ����� �˷��ش�.
	//directory_iterator�� ���ϰ��� auto �ڷ��� name�� ���Եǰ�, �� ������ ����ϴ� ���̴�.
	for (auto& name : fs::directory_iterator(directory))
		cout << name << '\n';

	return 0;
}