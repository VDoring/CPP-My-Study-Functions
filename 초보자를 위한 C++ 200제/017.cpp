//017
//���ڿ��� ���� �����ϱ�(string)
#include <string> //���ڿ� ��� ���� string ǥ�� �ش� ����
#include <iostream>

using namespace std;

int main() {
	//string ������ �ʱ갪 ����
	string my_country = "Korea";
	string my_job = "developer";

	cout << "Country : " << my_country << endl;
	cout << "Job : " << my_job << endl;
	
	string my_info = my_country + ", " + my_job; //�� ������ , �� �̿��Ͽ� ���ο� ���ڿ��� �����.
												//C������ strcat()�� ���.

	cout << "My info : " << my_info << endl;

	return 0;

}

/*
C���� ���ڿ��� ����ϱ� ���� char �迭(char [])�� ���������, C++�� string�� �ٷ�� �� ���ϴ�.
��ȥ C++������ char�� ����� ���� �ִ�.

(C������ ���ڿ� ������ malloc()���� ����� ���ڿ� ����, �߰�, ���� �۾� ���� �����ߴ�.
�� �۾��� �����Ϸ��� ���ڿ��� ũ��, ���ڿ� ���� null, �����ڵ�, ��Ƽ����Ʈ ��Ȳ �� ����� ���� ���Ҵ�.
C++���� �����ϴ� string�� '+'���� Ȱ���� ���������� ���ڿ��� �����Ͽ� ���� ����� �� �ִ�.)
*/