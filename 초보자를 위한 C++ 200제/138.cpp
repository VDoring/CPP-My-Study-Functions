//138
//atomic ����ϱ�(atomic_compare_exchange_weak)
#include <iostream>
#include <atomic> //atomic�� ����ϱ� ���� include

using namespace std;

int main()
{
	atomic<int> data1(10); //atomic ���� ����

	int number = 20; //������ ���� ����

	bool is_excharge = data1.compare_exchange_weak(number, 30); //compare_exchange_weak�� �� ��ü�� �̷������ true, �׷��� ������ false�� �����Ѵ�. �Լ��� ù ���� ���� number�� data1�� ���� ���� �ʴٸ� data1�� ������� �ʴ´�. �׸��� number�� data1�� ���� ���� �ȴ�. �� data1 10�� number 20�� ���� �ʴٸ� data1�� 10�� �����ϰ�, number�� data1�� �� 10�� ���� �ȴ�.

	cout << boolalpha; //10�� 20�� ���� �ʱ� ������ number���� data1�� ���� 10�� �Ҵ�ȴ�.
	cout << "data1 : " << data1 << ", number : " << number << ", " << is_excharge << endl; //����� 10,10,false

	atomic<int> data2 = ATOMIC_VAR_INIT(10); //���ο� atomic ������ �����Ѵ�. number�� ���� �ִ� 10�� ���� ���̴�.

	is_excharge = atomic_compare_exchange_weak(&data2, &number, 40); //ù���� ���ڿ� �ι��� ���ڸ� ���Ͽ� ���� �Ȱ��ٸ� data2���� 40�� �Ҵ�ǰ� number�� ���� ������� �ʴ´�.

	cout << "data2 : " << data2 << ", number : " << number << ", " << is_excharge << endl; //����� 40,10,true

	return 0;
}