//045
//���밪�� ������ ���ϱ�(abs, fabs, pow) 
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	cout << "==���밪 ���ϱ�==" << endl;
	cout << "-10�� ���밪 : " << abs(-10) << endl; // 10 
	cout << "-5.72�� ���밪 : " << fabs(5.72) << endl; // 5.72 
	
	cout << endl;
	
	cout << "==������ ���ϱ�==" << endl;
	cout << "2�� 2�� : " << pow(2,2) << endl; // 4
	cout << "3�� 4�� : " << pow(3,4) << endl; // 81
	cout << "4�� 6�� : " << pow(4,6) << endl; // 4096
	cout << "8�� 3�� : " << pow(8,3) << endl; //512
	
	return 0;
}

/*
abs = absolute value���밪)�� ����. 
������ ���밪 = abs()�� ���� 
�Ǽ��� ���밪 = fabs()�� ����

������ C++������ abs�ε� �Ǽ��� ���밪�� ���� �� ������, Long �ڷ����� Labs�� ���밪�� ���� �� �ִ�.
�ش� �Լ����� �ּ� ��ȯ���� �ִ� ǥ�� �� ���� �ٸ���. 

*/
