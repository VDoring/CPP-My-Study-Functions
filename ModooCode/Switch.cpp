// Switch문을 사용한 텍스트 출력.

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() {
	int user_input;

	cout << "나의 정보" << endl;
	cout << "1. 이름 " << endl;
	cout << "2. 나이 " << endl;
	cout << "3. 설명 " << endl;

	cin >> user_input;

	switch (user_input) {
	case 1:
		cout << "DoR" << endl;
		break;

	case 2:
		cout << "100살" << endl;
		break;

	case 3:
		cout << "남자" << endl;
		break;

	default:
		cout << "정보 없음" << endl;
		break;
	}
	return 0;
}

// https://modoocode.com/138