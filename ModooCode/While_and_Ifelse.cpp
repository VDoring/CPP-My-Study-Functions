// �̸� ������ ������� �÷��̾ ���߱�

#include <iostream>
int main() {
	int lucky_num = 3;
	std::cout << "���� ��� ����?" << std::endl;

	int user_input;

	while (1) {
		std::cout << "�Է� : ";
		std::cin >> user_input;

		if (lucky_num == user_input) {
			std::cout << "����!" << std::endl;
			break;
		}
		else {
			std::cout << "�ٽ�.." << std::endl;
		}
	}
	return 0;
}

// https://modoocode.com/138