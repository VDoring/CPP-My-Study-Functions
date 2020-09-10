//137
//atomic ����ϱ�(exchange)
#include <iostream>
#include <atomic> //atomic�� ����ϱ� ���� include

using namespace std;

int main()
{
	atomic<int> data1(10);
	atomic<int> data2 = ATOMIC_VAR_INIT(20);
	atomic<int> data3 = data1.exchange(data2.load()); //data1�� exchange �Լ��� ȣ���ϸ� ���ڷ� data2�� ���� �����Ѵ�. data1�� data2�� ������ ��ü�ǰ� data3���� ���ϰ�(data1�� ���� ��) 10�� �Ҵ�ȴ�. exchange �Լ��� ���ϰ��� ����Ǳ� �������̴�.

	cout << data1 << ", " << data2 << ", " << data3 << endl; //��� ���. 20,20,10

	//atomic_exchange �Լ��� 12�� ������ data1.exchange �Լ��� ����� �Ȱ���. ù ���� ���ڴ� ������ atomic ������ �ι��� ���ڴ� ������ ���̴�.
	atomic_exchange(&data1, data3);
	atomic_exchange(&data2, data1.load());
	atomic_exchange(&data3, 55);

	cout << data1 << ", " << data2 << ", " << data3 << endl; //��� ���. 10,10,55

	return 0;
}