//048
//�Ҽ��� �и��ϱ�(modf) 
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	//�Ǽ� 3�� ���� 
	double x = 1.2345;
	double div = 0.0;
	double mod = 0.0;
	
	//modf �Լ��� �̿��� �Ǽ��� ������ �Ҽ��� ���Ѵ�.
	//modf �Լ� ��ȯ���� ������ �Ҽ��̰�, modf �Լ� ���ڷ� ���޵Ǵ� �� ��° �������� ���� ���� ����ȴ�.
	//div������ �ּҸ� �ѱ�� ������ �ش� �Լ����� ���� �����ϸ� �Լ� ȣ�� ���� �ۿ����� ���� ��ȿ�ϰ� �ȴ�. 
	mod = modf(x,&div);
	
	cout << "1.2345�� �� : " << div << ", ������ : " << mod << endl;
	
	return 0;
}
