//016
//������ ���� �����ϱ�(char)
#include <iostream>

using namespace std;

int main() {
	//char�� ����: -128 ~ 127
	//���ڷε� �� �Ҵ� ����
	char ch1 = 'c';
	char ch2 = 200; //char������ ������ �ʰ��ϴ� ���� �ԷµǸ� ������ ����.
					//128 - 200 = -72�̹Ƿ�, char�� �ּ� ���� -127���� 72������ -56�� ��µȴ�

	//unsigned char�� ����: 0 ~ 255
	//unsigned char = ��ȣ ���� char
	unsigned char ch3 = 'c';
	unsigned char ch4 = 200; //unsigned char ������ ���ϴ� ���� �Ҵ�ޱ⿡ ���ڴ� ���������� ��µȴ�.
							//������ 200�� �ش��ϴ� �ƽ�Ű ���� �����Ƿ� ?�� ��µȴ�.

	printf("char ch1 = %c, %d \n", ch1, ch1); // c, 99
	printf("char ch2 = %c, %d \n", ch2, ch2); // ? -56
	printf("char ch3 = %c, %d \n", ch3, ch3); // c, 99
	printf("char ch4 = %c, %d \n", ch4, ch4); // ? 200

	return 0;
}

/*
�ƽ�Ű�ڵ�(ASCII) : �����迡�� �������� ����ϴ� ��ǻ�� ���� ��

- Ư������ : 33 ~ 47, 58 ~ 64, 91 ~ 96, 123 ~ 126
- ���� : 48 ~ 57
- �빮�� : 65 ~ 90
- �ҹ��� : 97 ~ 122
*/