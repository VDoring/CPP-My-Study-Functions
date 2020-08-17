//056
//���ڿ� ��ҹ��� ��ȯ�ϱ�(toupper, tolower) [!] 
#include <iostream>
#include <string>
#include <algorithm> //transform()�Լ��� ����ϱ� ���� 

using namespace std; 

int main() {
	string silla = "divided into the Three kingdoms.";
	string joseon = "Yi Seong-gye, established Joseon in 1392.";
	
	//���ڿ� ��ü�� �빮�ڳ� �ҹ��ڷ� ��ȯ�ϴ� transform()�Լ��� �̿��Ѵ�.
	//���ڿ� �ڿ� ���� begin�� ó�� ��ġ, end�� ������ ��ġ�� �ǹ��Ѵ�.
	//�Լ� ����: (������ ���ڿ��� ������, ������ ���ڿ��� ������, ������ ���ڿ��� ������(�ٸ� ���ڿ� ������ ������ �� ����), �빮�ڷ� ��ȯ�Ϸ��� toupper �ҹ��ڷ� ��ȯ�Ϸ��� tolower ���.)
	transform(silla.begin(), silla.end(), silla.begin(), toupper);
	transform(joseon.begin(), joseon.end(), joseon.begin(), tolower);
	
	char lower_ch = 'g';
	char upper_ch = 'B';
	
	//�ϳ��� ���ڸ� ��ȯ�ҋ� toupper �Ǵ� tolower�Լ��� ȣ���Ͽ� ���ϰ��� ������ �����Ѵ�. 
	//��ȯ���� �빮�� �Ǵ� �ҹ��ڷ� ��ȯ�� ��� ���̴�. 
	lower_ch = toupper(lower_ch);
	upper_ch = tolower(upper_ch);
	
	cout << "���ڿ� �빮�ڷ� ��ȯ : " << silla << endl;
	cout << "���ڿ� �ҹ��ڷ� ��ȯ : " << joseon << endl;
	cout << "���� �빮�ڷ� ��ȯ : " << lower_ch << endl;
	cout << "���� �ҹ��ڷ� ��ȯ : " << upper_ch << endl;
	
	return 0;
}
