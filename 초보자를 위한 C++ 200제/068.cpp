//068
//������ ������ �ִ�/�ּҰ� �˾Ƴ���(min, max)
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	auto result1 = min(1, 5); //min �Լ��� ���� 1�� 5�� ���ڸ� �ѱ�� �ּ� ���� �˾Ƴ���.
	                          //�ڷ��� auto�� ��ȯ���� �������� �� �� ����� �� �ִ� Ű�����̴�.
	auto result2 = max('a', 'z'); //max �Լ��� ���ĺ� a�� z�� �ѱ��.
	                              //a���� z�� ���� ���߿� ������ ���ڸ� �˾Ƴ��� ������ �ƽ�Ű �ڵ� ���� �������� ��ȯ�Ѵ�.
	                              //�ҹ��� a�� 10������ 97, z�� 122�̴�.

	cout << result1 << ", " << result2 << endl;

	auto result3 = minmax({ 'a','n','z' }); //minmax ���ڷ� a,n,z�� �ѱ��. a�� �ƽ�Ű �ڵ�� 97, n�� 110, z�� 122�̴�.
	auto result4 = minmax({ 1,2,3 }); //minmax ���ڷ� 1,2,3�� �ѱ��.

	//auto Ű����� ���� ����� first�� �ּҰ�, second�� �ִ밪�̴�.
	cout << result3.first << ", " << result3.second << endl;
	cout << result4.first << ", " << result4.second << endl;

	return 0;
}