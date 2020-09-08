//134
//Thread ����ϱ�(join, sleep)
#include <iostream>
#include <thread>
#include <chrono> //boost�� �����ִ� ���̾����� C++ ǥ���� ���� �����ϸ鼭 chrono�� ����������, ���־� ��Ʃ��� 2012���� ����� �� �ִ�.

using namespace std;

void Pause(int sec) //������ ������ ���ڷ� �޴� �Լ��� �����Ѵ�. �׸��� ���� �����带 �D�ʰ� ���ߵ��� this_thread::sleep_for �Լ��� �̿��Ѵ�. ���ڴ� chrono ���̺귯���� �̿��Ѵ�.
{
	this_thread::sleep_for(chrono::seconds(sec)); //chrono::seconds(2s)�ε� �����Ͽ� ����� �� �ִ�.
}

int main()
{
	//������ 3���� �����ϸ� ������ �Լ��� Pause�� �����Ѵ�. Pause�� ���ڷ� ���� 3,4,5�� �����Ѵ�. �̋� ����ϴ� �Լ� ���ڴ� �����̶� ȣ���� �Լ��� ���� ������ ���� �ѱ� �� �ִ�.
	thread sleep1(Pause, 3);
	thread sleep2(Pause, 4);
	thread sleep3(Pause, 5);

	sleep1.join(); //�����带 �����ϱ� ���� join �Լ��� ����Ѵ�.
	cout << "3�� ���" << endl;

	sleep2.join();
	cout << "4�� ���" << endl;

	sleep3.join();
	cout << "5�� ���" << endl;

	return 0;
}

/*
������� �� ���μ������� ����Ǵ� �����̴�.
���μ��� ���������� ���� ��������� ������ �ý��� �ڿ��� ���� �Ǵ� �����Ѵ�.
�����带 �����ϴ� ��ü�� OS �����ٷ��� ���� ����� CPU��翡 ���� �ٸ���.
������� ���μ����� �� ���� ������ �۾��� ���� ź���� ���� �����̱⵵ �Ѵ�.
*/