//013
//���ӽ����̽� ����(namespace)
#include <iostream>
using namespace std;

/*
���ӽ����̽�(namespace) �������
1) �ڵ� �ȿ��� ���� �̸����� ����, �Լ� �̸��� ����� �Ҷ�
2) �ܺο��� �����ϴ� �ҽ��� ����ϴ� ���� ���� �̸��� ������ �Լ��� ���� �� ����
*/

//������ �Լ��� �ش� ���������� ��ȿ�ϵ��� �����Ѵ�.
namespace silla { //silla ���ӽ����̽� ����
	int year = 935; //(������ �̸��� ����!)

	void CentralArea() { //(������ �̸��� �Լ�!)
		cout << "���" << endl;
	}
}

namespace baekjae { //baekjae ���ӽ����̽� ����
	int year = 660; //(������ �̸��� ����!)

	void CentralArea() { //(������ �̸��� �Լ�!)
		cout << "��û��" << endl;
	}
}

//���� ������ �� ���ӽ����̽��� ����ϰڴٰ� �����Ѵ�. �̶� using Ű���带 �̿��Ѵ�.
using namespace silla;
using namespace baekjae;

int main() {
	cout << "�Ŷ� �߽��� : ";
	silla::CentralArea();
	cout << "�Ŷ� ������� : " << silla::year << endl;

	cout << "���� �߽��� : ";
	baekjae::CentralArea();
	cout << "���� ������� : " << baekjae::year << endl;

	return 0;
}