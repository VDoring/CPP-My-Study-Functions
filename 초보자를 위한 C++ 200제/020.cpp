//020
//���� ���� �����ϱ�(bool)
#include <iostream>

using namespace std;

int main() {
	int x = 10;
	int y = 6;

	bool is_true = false; //bool ������ �����Ͽ� false�� �ʱ�ȭ�Ѵ�. (���⼱ ���ǿ� "�´�"��� ���� �����ϱ� ����)

	if (x > y) {
		is_true = true;
	}
	else {
		is_true = false;
	}

	if (is_true == true) {
		cout << "x�� y���� Ů�ϴ�" << endl;
	}
	else {
		cout << "x�� y���� �۽��ϴ�" << endl;
	}
	
	return 0;
}

/*
���� ������ true�� false�� ��Ÿ����, true�� ���� 1, false�� ���� 0�� ���� ���´�.
���� ������ �ٷꋚ 1, 0���ε� ����� �� ������, �������� ���� true, false�� ����ϴ� ���� �Ϲ����̴�.
C++���� �����ϴ� �Լ� ���¿� ���� ���� ��ȯ���� true, false �Ǵ� 0, 1�� �����ϱ⵵ �Ѵ�.

*/