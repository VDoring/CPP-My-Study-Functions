//135
//Thread ����ϱ�(detach)
#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void Pause(int sec) //(���� ������ �Ȱ��� �Լ��̴�)
{
	this_thread::sleep_for(chrono::seconds(sec));
	cout << sec << "�� ���" << endl;
}

int main()
{
	//thread 3���� �����ϸ� ������ �Լ��� Pause�� �����Ѵ�.
	thread sleep1(Pause, 3);
	thread sleep2(Pause, 5);
	thread sleep3(Pause, 4);

	//��� �����带 ���� �����忡�� �и��ϱ� ���� detach�� ȣ���Ѵ�.
	sleep1.detach();
	sleep2.detach();
	sleep3.detach();

	getchar(); //�ֿܼ��� Ű���� �Է��� ����ϴ� �Լ���.
	           //�� ���������� �����尡 ��� �и��Ǿ��� ������ ���� ������� ���� �Ϻη� ���� �޽����� ���� ���� �� �ڵ带 �־���.

	return 0;
}

/*
detach�� ���� �����忡�� �ش� �����带 �и��Ѵ�.
�ش� ������� ���� �� ����Ǵ� ������ ������ �ڿ��� ��ȯ�� �����ȴ�.
�ٸ� detach�� �и��� ������� ������ �� ���� ������ �� �����尡 ���� ��� ������� �����ϱ� ��ƴ�.
*/