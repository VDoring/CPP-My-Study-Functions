//077
//const ���� �����ϱ�
#include <iostream>
#include <string>

using namespace std;

int main()
{
	const string kMyJob = "developer"; //const�� ����Ǿ��� ������ ���α׷��� ������ ������ ���� ������ �ʴ´�.

	string question = "who are you : ";
	string answer = "my job is : ";

	cout << question << kMyJob << endl;
	cout << answer << kMyJob << endl;

	return 0;
}

/*
const�� ����� �Ҹ���� ���� �ٲ㼱 �� �� ���� �ǹ��Ѵ�.
C����� #define�� ��ü�ϴ� C++ �������� �ش� ������ ������� �ʱ� ������ �ڵ� ����ȭ���� ȿ���� �ִ�.

�Ϲ������� ������� ���� �������� const�� ������ ���� �����ϴµ�, �̷� ��� �Ź� ���� �����ϴ� ������ ������ �� �־ �������� ȿ�����̴�.
const�� �Լ� ����, ����, ������ ��� ����� �� �־� �� ���ӻ��� �پ��ϴ�.

�����, ���� ������ ���̿��� const�� ���� ����� �Ͼ��.
���� ����� �ٲ� �� ���� Ű����� const, #define, enum�� �ִµ�, ��Ȳ�� ���� ȿ������ Ű���尡 �� �ٸ��� �����̴�.
*/