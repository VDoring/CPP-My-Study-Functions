//049
//���� �����ϱ�(srand, rand)
#include <iostream>
#include <ctime>

using namespace std;

int main() {
	//������ seed�� �ɴ� ����. �ð��� �ʱ�ȭ�� ������ �׻� �Ȱ��� �ʵ��� �Ѵ� 
	srand(static_cast<unsigned int>(time(NULL)));
	
	//������ ������ 0~32767 �̴�.
	//rand()�Լ��� srand�Լ��� ���� ����� seed���� �̿��� �������� ���� �����Ѵ�. 
	for(int i = 0; i < 5; i++) {
		cout << "���� : " << rand() << endl;
	}
	
	return 0;
}

/*
������ ���� �� �ش� ������ ���α׷� �ȿ��� �� ���� �ʱ�ȭ�ؾ� �Ѵ�.
������ ���ϱ� ���ؼ� seed�� �Ҹ��� � ���� �ʿ��ѵ�, ������ �ý��� �ð��� �ÿ��Ѵ�.
seed�� �������� �������� ���� �����ϱ� ������ seed�� ��� �ٲ��� �Ѵ�.
�׷��� �ʴٸ� �����ӿ��� �׻� ���� ����� ��µȴ�. 

rand�Լ��� ������ �ǹ��� ������ �ƴϴ�.
�׷��� C++11���� ���� ���� �����⸦ �����ϰ� �ִ�.

[C++ ���� ���� ���ø�] 
1.random_device
2.linear_congurential_engine
3.mersenne_twister_engine
4.subtract_with_carry_engine
*/
