//061
//���ڿ����� Ư�� ���ڸ� �����ϱ�(erase, remove)
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	string sentence = "i like coding";

	sentence.erase(remove(sentence.begin(), sentence.end(), ' '), sentence.end()); //Visual Studio 2017 ERROR. I don't know.
	//���ڿ����� Ư�� ���ڸ� ������ ���� erase�� remove�Լ��� �Բ� ����Ѵ�.
	//erase�Լ��� ù���� ���ڷ� remove �Լ��� ȣ��Ǿ��µ�, �� �Լ��� Ư�� ���ڰ� �ִ� ��� �ε����� erase�Լ��� �˷��ش�.
	//ù��° ���� begin�� ���ڿ��� ���� ��ġ, �ι��� ���� end�� ���ڿ��� ������ ��ġ, ������ ���� ' '�� �����̴�.
	//���ڿ��� ���ۿ��� ������ ��ġ���� ��ȸ�Ͽ� ������ ��� ��ġ�� erase�Լ��� �����ϴ� ���̴�.

	cout << sentence << endl;

	return 0;
}