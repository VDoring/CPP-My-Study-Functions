//161
//map �˻�, �����ϱ�(find, erase)
#include <iostream>
#include <map>
#include <string>

using namespace std;

void Print(const map<int, string> &data) //map�� ���ڷ� �޾� ���� ��Ҹ� ��� ����ϴ� �Լ��̴�.
{
	cout << "== Print ==" << endl;

	for (auto iter = data.begin();
		iter != data.end();
		++iter)
		cout << iter->first << " : " << iter->second << ", ";

	cout << endl;
}

int main()
{
	map<int, string> data; //map�� �����ϰ� ������ 3���� �����Ѵ�.
	data.insert({ 5, "test1" });
	data.insert({ 3, "test2" });
	data.insert({ 11, "test3" });

	data[3] = "test ����"; //������ =�� ����� value�� ������ �� �ִ�. �̋� ����� 3�̶� ������ �ε��� 3���� �ƴ� Ű �� 3�� �ǹ��Ѵ�.

	auto result = data.find(11); //find �Լ��� ���ڷ� Ű ���� �Է��Ѵ�. ���⼭�� ���� 11�� �ε��� 11�� �ƴ϶� Ű �� 11�� �ǹ��Ѵ�. find�� ��ȯ���� �ݺ��� iterator�� auto�� map<int,string>::iterator�� ����.

	if (result != data.end()) //30�� ������ �ݺ��ڴ� �����̳� map�� ó�� ��ġ���� ������ ��ġ���� ��ȸ�Ѵ�. ���� �˻��� �����ϸ� �ش� ��ġ�� ��ȯ�ϰ� ã�� ���ߴٸ� ��ȸ�� ������ ��ġ�� ��ȯ�Ѵ�. �׷��� ��ȯ�ڸ� �̿��� �� �̿� ���� != map.end�� ����Ѵ�. ������ ��ġ���� �̵��ߴµ� �˻����� ���ߴٸ� �����Ͱ� ���ٴ� ���̴�.
		cout << "== �˻� ���� : " << result->first << ", " << result->second << endl;
	else
		cout << "== �˻� ���� ==" << endl;

	data.erase(5); //erase �Լ��� Ű �� 5�� �����Ѵ�. ���������� �ε��� 5���� �ƴ� Ű �� 5�� �ǹ��Ѵ�.

	Print(data); //�����̳� data�� ��� ��Ҹ� ����Ѵ�.

	return 0;
}