//127
//Ŭ���� ���ø� ����ϱ�(template <class T>)
#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <class T> //template�� �����ϸ鼭 <> �ȿ� class T�� �����ߴ�. class�� typename�̳� ���� �ǹ����� Ŭ���� ���ø��̶�� �������� ���� typename ��� class�� ��︰��.
class TemplateData
{
public:
	void Add(T arg) { data_.push_back(arg); } //Add �Լ��� ���� arg�� �ڷ����� �������� �ʾ�����, �����Ϸ��� �߷��� ����� 22�� ���� ������ �ڷ����� �ȴ�.
	int Size() { data_.size(); } //���� data_�� ũ�⸦ �����ϱ� ���� �Լ� size�� ȣ���Ѵ�.
	void Print() //���� data_�� �ִ� ������ ��� ����Ѵ�.
	{
		for (int i = 0, size = data_.size(); i < size; i++)
			cout << "data_ : " << data_.at(i) << endl;
	}

private:
	vector<T> data_; //�ڷ����� �������� ���� ���� data_�� �����Ѵ�.
};

int main()
{
	//Ŭ���� �ڷ����� int�� string���� �����ϰ� �����͸� �߰��� �� ����� ����Ѵ�. �ѹ� ������ �ڷ����� ������ �� ������ ��ü�� ������ �� �ݵ�� <>�ȿ� �ڷ����� �����ؾ� �Ѵ�.
	TemplateData<int> data_int;
	data_int.Add(1);
	data_int.Add(2);
	data_int.Print();

	TemplateData<string> data_string;
	data_string.Add("Hello");
	data_string.Add("World");
	data_string.Add("!!");
	data_string.Print();

	return 0;
}