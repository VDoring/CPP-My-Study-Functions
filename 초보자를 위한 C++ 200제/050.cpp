//050
//�������� ���ڿ��� �迭 ����(random_shuffle) 
#include <iostream>
#include <random>
#include <algorithm>
#include <ctime>

using namespace std;

int main() {
	string str1 = "1a2b3c4d5e6f7g8h9i";
	string str2 = "republic of korea";
	int data1[10] = {1,2,3,4,5,6,7,8,9,10};
	
	srand(static_cast<unsigned int>(time(NULL)));
	
	//���ڿ� ���ڰ� ���� ���ڿ��� ���ڷθ� �̷���� ���ڿ��� ���ġ�Ѵ�.
	//string������ begin�� ù ��ġ, end�� ������ ��ġ�� �ǹ��Ѵ�. �� ���ڿ� ��ü�� ���ġ ������ �����Ѵٴ� ���̴�. 
	random_shuffle(str1.begin(), str1.end());
	random_shuffle(str2.begin(), str2.end());
	
	//data1 + 4�� data1�� �ε��� 0~3������ �������� ���ġ�Ѵٴ� �ǹ��̴�. 
	random_shuffle(data1, data1 + 4);
	
	//�������� ���ġ�� ����� ����Ѵ�. 
	cout << "== str1 ==" << endl;
	for(auto i : str1)
		cout << i << ", ";
		
	cout << endl << "== str2 ==" << endl;
	for(auto i : str2)
		cout << i << ", ";
	
	cout << endl << "== data1 ==" << endl;
	for(auto i : data1)
		cout << i << ", ";
		
	return 0;
}
