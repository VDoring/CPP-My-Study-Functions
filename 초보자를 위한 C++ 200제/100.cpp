//100
//���� ����, ����, �����ϱ�(filesystem)
#include <iostream>
#include <fstream>
#include <filesystem>

using namespace std;
namespace fs = experimental::filesystem; //filesystem ���ӽ����̽��� �����ϴ� experimental�� fs�� ���ο� �̸����� �����Ѵ�.

int main()
{
	fs::create_directory("temp"); //temp��� �̸��� ������ �����Ѵ�. ������ ��θ� �������� ���� ��� ������Ʈ ������ temp������ �����ȴ�.
	fs::copy("temp", "temp_copy"); //temp������ temp_copy�� ������ �����Ѵ�. ������ ��θ� �������� ���� ��� ������Ʈ ������ temp_copy������ �����ȴ�.
	fs::remove("temp"); //temp������ �����Ѵ�.
	fs::remove("temp_copy"); //temp_copy������ �����Ѵ�.

	return 0;
}