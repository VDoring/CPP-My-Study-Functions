//059
//���ڿ� �Ϻ� �����(erase)
#include <iostream>
#include <string>

using namespace std;

int main() {
	string sentence = "i hate coding";

	sentence.erase(0, 7); //(����, ��)
	                      //"i hate" ����. sentence[0] ~ sentence[6]. �� 7���� ���ڰ� ���ŵ�.

	cout << "i like " << sentence << endl;

	return 0;
}

/*
���ڿ� �Ϻδ� �ε����� �̿��� ������ �� �ִ�.
erase �Լ��� ������ ������ ���� �ε����� ������ ���� ������ �����ϸ� �ش� ������ ���ڿ��� �����ȴ�.
*/