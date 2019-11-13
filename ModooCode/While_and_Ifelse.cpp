// 미리 설정된 정답수를 플레이어가 맞추기

#include <iostream>
int main() {
	int lucky_num = 3;
	std::cout << "나의 비밀 수는?" << std::endl;

	int user_input;

	while (1) {
		std::cout << "입력 : ";
		std::cin >> user_input;

		if (lucky_num == user_input) {
			std::cout << "정답!" << std::endl;
			break;
		}
		else {
			std::cout << "다시.." << std::endl;
		}
	}
	return 0;
}

// https://modoocode.com/138