//136
//atomic ����ϱ�(init,store,load)
#include <iostream>
#include <atomic> //atomic�� ����ϱ� ���� include

using namespace std;

int main()
{
	atomic<int> data1 = 10; //atomic�� ����ϴ� ����̴�. �Ϲ� ������ ����ó�� = �����ڸ� �̿��� ���� �Ҵ��� �� �ִ�.
	atomic<int> data2 = ATOMIC_VAR_INIT(20); //�� ���κ��� �������� ���̰� ���� ��Ȯ�ϰ� �����Ϸ��� ATOMIC���� ���ù��� ����� ���� �ִ�.
	atomic<int> data3 = ATOMIC_VAR_INIT(30); //atomic<int>�� atomic_int�� �Ȱ��� �ǹ��̴�. �ʱ�ȭ ����� �̷��� �� 3�����̴�.

	cout << data1 << ", " << data2 << ", " << data3 << endl; //��� ���. 10,20,30

	data1.store(11); //store�� = �����ڿ� �Ȱ��� �ǹ��̴�. data���� 11�� ����ȴ�.
	data2.store(data3.load()); //data2�� store�� ȣ���ϸ� ���ڷ� data3�� ���� �����Ѵ�. Load�� �ش� ���� �ҷ��´ٴ� �ǹ��̴�.

	atomic_store(&data3, 50); //store�� atomic_store�� �Ȱ��� �ǹ��̴�. �ٸ� atomic_store�� ù ���� ���ڷ� ���� ������ ���� �̸�, �� ���� ���ڷ� ���� �޴´�.

	cout << data1 << ", " << data2 << ", " << data3 << endl; //����� ����Ѵ�. 11,30,50

	return 0;
}

/*
�������� ������ �þ� ��Ʈ��ũ, ��Ƽ ������ ȯ�濡�� ���α׷����� �� ��, ��������, ���ؽ�, violate �� ���� �ڿ��� ����ϱ� ���� ���� ����� Ȱ���� ���̴�.
�� �ø���� �ش� �׸��� �ٷ��� ������ �׋� �ʿ��� Ŭ������ atomic Ȱ�� ����� �Ұ��ϰڴ�.

atomic���� ���Ͷ� ���� Ȱ���� ����ȭ ��ü�� ����ϱ� ���� ������� �����ϸ� �� ���� ���α׷����� �� �ִ�.
�� �忡���� atomic���� int ��������ϴ� ����� �Ұ��Ѵ�.
*/