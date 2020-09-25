//151
//tuple ����ϱ�(piecewise_construct)
#include <iostream>
#include <tuple>

using namespace std;

struct TupleExam { //piecewise_construct�� Ȯ���ϱ� ���� ����ü�� �����ϰ� ���� �ٸ� �����ڸ� �����Ѵ�. �ϳ��� Ʃ���� ���ڷ� ������, �ٸ� �ϳ��� Ʃ���� �����ϴ� �ڷ����� �и��Ͽ� �޴´�.
	TupleExam(tuple<int, string>) {
		cout << "Tuple�� ���� ����" << endl;
	}

	TupleExam(int n, string s) {
		cout << "piecewis_construct�� ���� ����" << endl;
	}
};

int main()
{
	tuple<int, string> data(1, "str"); //������ ���ڿ��� ������ Ʃ���� �����Ѵ�.

	pair<TupleExam, TupleExam> data1(data, data); //pair�� �����ϴµ� ���ڷ� data Ʃ���� �����Ѵ�. 9�� ������ �����ڰ� ȣ��ȴ�.
	pair<TupleExam, TupleExam> data2(piecewise_construct,data,data); //pair�� �����ϴµ� ���ڷ� data Ʃ���� �����Ѵ�. �ٸ� �տ� piecewise_construct Ű���带 �־� Ʃ���� �ƴ� Ʃ���� �����ϴ� ��ҵ��� �����Ͽ� ���ڷ� �����Ѵ�.
	pair<TupleExam, TupleExam> data3(make_tuple(2, "str"), make_tuple(2, "str")); //pair�� �����ϴµ� ���ڷ� ���ο� Ʃ�� 2���� �����Ѵ�. 22�� ����ó�� 9�� ������ ����ȴ�.
	pair<TupleExam, TupleExam> data4(piecewise_construct, make_tuple(2, "str"), make_tuple(2, "str")); //24~25�� ���ΰ� �Ȱ����� ù ���� ���ڷ� piecewise_construct Ű���带 �����Ѵ�. 13�� ������ ����ȴ�.
	
	return 0;
}

/*
pair�� ������ ��, Ʃ���� ���ڷ� ������� �ʰ� Ʃ�� ���� ��ҵ��� ���ڷ� ����� �� �ִ�.
���ڷ� ���޵Ǵ� ���� Ʃ���� �ƴ϶� Ʃ�� ������ ���� ��ҵ��̴�. �̋� ����ϴ� Ű���尡 piecewise_construct�̴�.
*/