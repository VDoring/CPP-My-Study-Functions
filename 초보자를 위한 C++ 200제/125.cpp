//125
//type_tratis ����ϱ�[3] (conditional)
#include <iostream>
#include <string>

using namespace std;

template <typename T1, typename T2> //���� �忡�� ��� �Լ� template�� �����Ѵ�. 18�� ���ο��� int, double�� ���ڸ� �ѱ�� ������ ���⼭ T1�� int, T2�� double�� �ȴ�.
string TmpFunc(T1 x, T2 y) //11�� ���ο��� conditional�� ����ϴµ�, ù ��° ���ڿ� true�� �Ҵ�Ǹ� int, false�� �Ҵ�Ǹ� double�� type1�� �ڷ����� �ȴ�. ���⼭�� T1�� T2�� ���� �ڷ����̶�� true, �׷��� �ʴٸ� false�̴�.
{
	conditional<is_same<T1, T2>::value, int, double >::type type1;

	return typeid(type1).name();
}

int main()
{
	string type = TmpFunc(1, 22.3); //TmpFunc�� ���� 1�� �Ǽ� 22.3�� ���ڷ� �ѱ� �� ���ϰ����� �ڷ����� �޴´�. 11�� ���� is_same�� int�� double�� ���ϱ� ������ conditional�� ù ��° ���ڴ� false�̴�. false�̱� ������ double�� ���ϰ����� �޴´�.

	if (type == "double") //���ϰ� type�� ���ڿ� "double"�̶�� 21�� ������ ����ǰ� �ƴ϶�� 23�� ������ ����ȴ�.
		cout << "double �ڷ����Դϴ�" << endl;
	else
		cout << "double �ڷ����� �ƴմϴ�" << endl;

	return 0;
}

/*
���� �������� �ڷ����� Ư������ �� ���� �� Ÿ�� Ʈ�������� conditional�̳� �����忡�� ��� ���ø��� ������ �����ϴ� ���� ����.
*/