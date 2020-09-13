//143
//decitype ����ϱ�
#include <iostream>

using namespace std;

int main()
{
	auto data1 = 1; //auto ���� data1���� 1�� ���ԵǱ� ������ �ڷ����� int��.
	decltype(data1) data2 = 2; //auto ���� data1�� �ڷ����� decitype�� int�� �����Ͽ� data2�� �ڷ����� �����Ѵ�.

	auto data3 = 3.4; //auto ���� data3���� 3.4�� ���ԵǱ� ������ �ڷ����� double�̴�.
	decltype(data2 + data3) data4 = 3; //auto ���� data2�� �ڷ����� decitype�� int�� �����ϰ� data3�� �ڷ����� double�� �����Ѵ�. int���� double �ڷ����� ������ �� ũ�Ƿ� data4�� double �ڷ����� �ȴ�.

	cout << "Data1 : " << data1 << ", " << typeid(data1).name() << endl;
	cout << "Data2 : " << data2 << ", " << typeid(data2).name() << endl;
	cout << "Data3 : " << data3 << ", " << typeid(data3).name() << endl;
	cout << "Data4 : " << data4 << ", " << typeid(data4).name() << endl;

	return 0;
}

/*
C++���� Ÿ�� �����ϴ� ������� �� ������ �ִ�.
1. auto
2. decitype

decitype�� ���ڷ� ���� �ڷ����� ���� �ٸ� ������ �ڷ����� �����Ѵ�.
*/

/*
auto, decitype���� Ÿ���߷а� ������ �ڷ����� �����ִ� �Ϳ��� �ӵ��� �ڵ� ������ ���̰� �ִ�.
C++ 14������ Ÿ���߷��� ���� ������ �о��� ���� ����, Ŭ���� ��� �������� auto, decitype�� ����� �� �ְ� �Ǿ���.

�ַ� ���������� ����ϴ� GCC �����Ϸ����� decitype�� ����� typeof�� ����������, typeof�� ���� ���𿡸� ����� �� �ִ� �� ��� ����� ���� ���̰� �ִ�.
*/