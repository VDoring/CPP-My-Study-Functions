//175
//������ �ּ�, �ִ밪 Ȯ���ϱ�(minmax_element)
#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

int main()
{
	std::array<int, 5> data{ 5,9,4,1,7 }; //������ array�� �����ϸ� 5,9,4,1,7�� �ʱ�ȭ�Ѵ�.

	auto result1 = minmax_element(data.begin(), data.end()); //minmax_element �Լ��� data�� ���۰� �� ��ġ�� ���ڷ� �����Ѵ�. ����� result1�� ����.

	std::cout << "�ּҰ� : " << *result1.first; //minmax_element �Լ��� ���ϰ����� �����̳��� ��ġ 2���� ����ִ�. ù ������ �����̳��� �ּҰ� ��ġ, �� ������ �����̳��� �ִ밪 ��ġ�̴�. ���� ���� ����� ���� ��ġ�� ��� �ֱ� ������ ������ �����ڸ� �̿��Ѵ�. �׸��� 16, 18�� ����ó�� ���� ��ġ���� �ش� ��ġ�� ���� �ε��� ��ġ�� ��Ÿ����. ����� ���� 1,3,9,1 �̴�.
	std::cout << ", ��ġ : " << (result1.first - data.begin()) << '\n';
	std::cout << "�ִ밪 " << *result1.second;
	std::cout << ", ��ġ : " << (result1.second - data.begin()) << "\n";

	auto result2 = minmax_element(data.begin(), data.end(), [](int arg1, int arg2) { //minmax_element�� �� ���� ���ڷ� ���� �Լ��� �����Ѵ�. 13���� ����� �Ȱ����� �ǵ��� 13�� ����ó�� ����� ����ϴ� ���� ����.
		return arg1 < arg2;
	});

	std::cout << "�ּҰ� : " << *result2.first; //15~18�� ���ΰ� �Ȱ���.
	std::cout << ", ��ġ : " << (result2.first - data.begin()) << '\n';
	std::cout << "�ִ밪 " << *result2.second;
	std::cout << ", ��ġ : " << (result2.second - data.begin()) << "\n";

	return 0;
}

/*
���ĵ��� ���� �����̳��� �Ϻ� �������� �ּҰ��� �ִ밪�� Ȯ���� ���� minmax_element �Լ��� ����Ѵ�.
*/