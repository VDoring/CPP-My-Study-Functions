//141
//using ����ϱ�
#include <iostream>
#include <vector>

namespace MyArea //���ӽ����̽� ������ �����Ѵ�. �� ���� �ȿ��� ������ �����ϴ� �Լ� Plus�� �ֽ��ϴ�
{
	int Plus(int x, int y)
	{
		return x + y;
	}
}

using namespace std;
using namespace MyArea; //MyArea�� ����ϱ� ���� using namespace Ű���带 �̿��Ѵ�. using�� ����ϴ� ��� �� �ϳ��� �� �������� MyArea �ȿ� �ִ� ��� ����� �� �ڵ� �ȿ��� ����� �� �ִ�. ���� ���� std�� ����������.
using MyVector = vector<int>; //using�� �� �ٸ� ��� ������� vector<int>�� ��Ī�ϴ� ������ �����ش�. MyVector�� ���� vector<int>�� �ǹ̰� �Ȱ���.

int main()
{
	MyVector data; //vector<int>�� �������� MyVector�� �����߱� ������ �� ������ vector<int> data�� �Ȱ���. �������ΰ� �״������ο��� ���Ϳ� �����͸� �߰��ϰ� ����� ����Ѵ�.
	data.push_back(1);
	data.push_back(2);

	cout << "Data : " << data.at(0) << ", " << data.at(1) << endl;
	cout << "Plus : " << Plus(2, 4) << endl; //Plus �Լ��� �ܵ����� ȣ���� �� �ִ� ������ using namespace�� MyArea�� �����߱� �����̴�. �� �ڵ� �ȿ��� MyArea ������ ��� ��Ҹ� ����� �� �ִ�.

	return 0;
}

/*
���忡�� typedef�� �˾ƺôµ�, ��� using Ű���带 �̿��ϴ� ���� �� ȿ�����̴�.
typedef�� C++ �ڵ尡 �ͼ����� ���� ����鿡�� �������� using�� �������̶� �ڵ� �������� ����.

typedef�� using�̳� ��� ����� ����ϰ� �ǹ��ϴ� �ٵ� ��������� �������� Ȯ�强 ���� ������ typedef�� �ƿ� ������� ����� �̾߱⵵ �ִ�.
����, ȸ�縶�� ��� ����� �ڵ� �������� �ٸ��Ƿ� ������ �� ȿ�����̶�� �ܾ��� �� ����.
������, �ּ��� �� Ű���� ��� ������� �ʴٰ� ���� �����Ѵٸ� using�� ����ϴ� ���� ����.
*/