//148
//tuple ����ϱ�(cat)
#include <iostream>
#include <tuple>
#include <string>

using namespace std;

int main()
{
	tuple<int, double> data1(1, 2.1); //tuple �� ���� �����ϴµ� int, double����
	tuple<double, string> data2(3.4, "���ڿ�1"); //double, string���̴�.

	auto data3 = tuple_cat(data1, data2); //auto Ű���带 �̿��� Ÿ���� �����ϸ� tuple_cat �Լ��� �̿��� ���ο� Ʃ���� �����Ѵ�.
	                                      //tuple_cat �Լ��� data1�� data2�� ���ڷ� �����Ѵ�.
	                                      //���� ������ Ʃ���� <int, double, double, string>���°� �ȴ�. auto�� ������ Ÿ�ӿ� tuple<int, double, double, string>�� �ȴ�.

	cout << get<0>(data3) << ", " << get<1>(data3) << ", " << get<2>(data3) << ", " << get<3>(data3) << endl; //get�� �̿��� ����Ѵ�. ����� 1, 2.1, 3.4, ���ڿ� 1 �̴�.

	return 0;
}