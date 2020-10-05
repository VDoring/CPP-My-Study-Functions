//172
//���ǿ� �´� ��Ұ� ������ �˻��ϱ�(none_of)
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<int> data = { 8,27,35,49 }; //������ ���͸� �����ϸ� 8, 27, 35, 49�� �ʱ�ȭ�Ѵ�.

	bool is_small = any_of(data.begin(), data.end(), [](int i) {return i < 100; }); //data ���Ϳ� ���ٸ� ����Ѵ�. data�� �ִ� ��� ��Ұ� 100���� �۾ƾ� true�� ���ϵȴ�. ��� �� �ϳ��� 100���� ũ�ٸ� false�� ���ϵȴ�.

	bool is_zero = any_of(data.begin(), data.end(), [](int i) { return i != 0; }); //data�� �ִ� ��� ��Ұ� 0�� �ƴϾ�� true, �ϳ��� 0�̶�� false�� ���ϵȴ�.

	if (is_small == true && is_zero) //data ��Ұ� ��� 100���� �۰ų� 0�� �ƴ϶�� ���� ������ ����ȴ�.
		cout << "data �ڷ�� ��� 100���� �۰� 0�� �ƴմϴ�" << endl;

	return 0;
}

/*
none_of �Լ��� �����̳� ��� ��ΰ� ���ǿ� ���� �ʾƾ� true�� �����Ѵ�.
*/