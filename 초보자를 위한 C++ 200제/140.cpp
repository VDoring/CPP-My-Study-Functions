//140
//typedef ����ϱ�
#include <iostream>

using namespace std;

enum State //enum�� �����ϰ� ��� ���� 3�� �߰��Ѵ�. ������ ����� ���� ���� ������ 0���� ���������� ���� �Ҵ�ȴ�.
{
	kOpen,
	kClose,
	kDisconnect
};

typedef State state_; //typedef�� �̿��� num State�� ���� state_�� �����Ѵ�.

struct Status //state_ 2���� ��� ����ü Status�� �����ϸ� �� ����ü�� ������ status_ �� �����Ѵ�.
{
	state_ machine1;
	state_ machine2;
} status_;

int main()
{
	//status_�� ���¸� ���� �����ϰ� 28,29�� ���ο��� ����� ����Ѵ�. typedef�� �̿ܿ��� �Լ��� �� �ҽ��� ��ü�� �� �־� C����� #define�� �񱳵ȴ�. ���� ���ϴ� ���·� �ڷ����� ���� ������ �� �ִٴ� ���鿡�� �ҽ��� �������� ���̴µ� ������ �ִ� Ű�����.
	status_.machine1 = kOpen;
	status_.machine2 = kDisconnect;

	cout << "���� : " << status_.machine1 << endl;
	cout << "���� : " << status_.machine2 << endl;

	return 0;
}

/*
typedef�� ���ϴ� ���·� ������ �־� ����� �� �ִ�.
�̹� ���ǵ� �ڷ����� �ٸ� �̸��� �ο��� �� ������, ���� �ڷ����� ���� ���ǵ� �̸��� �Ȱ��� ��޵ȴ�.
*/