//133
//���� ó�� �����ϱ�(����� ����, runtime_error)
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class InputError : public runtime_error //����� ����, ���� ó�� Ŭ������ �����Ѵ�. runtime_error�� ��ӹ޾ƾ� try_catch���� ����� �� ������, runtime_error�� �޽����� ����ϴ� ��ҷθ� �����ص� �ȴ�.
{
public:
	InputError(int idx, string msg) //�� ����ó�� �� Ŭ������ 2���� ���ڸ� ������ ���� ���ο����� runtime_error�� string���·� �ʱ�ȭ�Ѵ�. C++������ ���� ����ó�� ������ �ʱ�ȭ�ϴ� ���� ������ ���鿡�� �����ϴ�. ���޹��� 2���� ���ڴ� 15�� ���ο��� ����ϴ� ��ҷ� ���ȴ�.
		: runtime_error("")
	{
		cout << idx << "�� �ε����� �߸��� �Է°� : " << msg << endl;
	}
};

int main()
{
	vector<int> data; //int�� �����ϴ� ���͸� �����Ѵ�.
	data.push_back(1); //�����͸� �� �� �߰��Ѵ�.

	int idx = 10;
	int value = 20;

	try
	{
		if (idx >= data.size()) //data ���Ϳ� ������ �ε��� ���� ���� ������� ũ�ų� ���ٸ� ���� ������ ����ȴ�. ���� �������� �б�Ǹ� 34������ �ٽ� �б�ǰ� �̾� 36�� ������ ����ȴ�.
			throw InputError(idx, to_string(value));

		data.at(idx) = 99;
	}
	catch (InputError e) //C++���� �⺻������ �����ϴ� Ű���尡 �ƴ� ����� ���� Ŭ������ ���ڷ� �޴´�. 36�� ���ο��� what �Լ��� ����� �� �ִ°� InputError Ŭ������ runtime_error�� ��� �޾ұ� �����̴�.
	{
		cout << e.what();
	}

	return 0;
}