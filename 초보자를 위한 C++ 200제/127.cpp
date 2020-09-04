//127
//클래스 템플릿 사용하기(template <class T>)
#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <class T> //template를 선언하면서 <> 안에 class T를 기입했다. class나 typename이나 같은 의미지만 클래스 템플릿이라면 가독성을 위해 typename 대신 class가 어울린다.
class TemplateData
{
public:
	void Add(T arg) { data_.push_back(arg); } //Add 함수의 인자 arg의 자료형이 정해지지 않았으며, 컴파일러가 추론한 결과는 22번 라인 벡터의 자료형이 된다.
	int Size() { data_.size(); } //벡터 data_의 크기를 리턴하기 위해 함수 size를 호출한다.
	void Print() //벡터 data_에 있는 내용을 모두 출력한다.
	{
		for (int i = 0, size = data_.size(); i < size; i++)
			cout << "data_ : " << data_.at(i) << endl;
	}

private:
	vector<T> data_; //자료형이 정해지지 않은 벡터 data_를 선언한다.
};

int main()
{
	//클래스 자료형을 int와 string으로 설정하고 데이터를 추가한 뒤 결과를 출력한다. 한번 정해진 자료형은 변경할 수 없으며 객체를 생성할 때 반드시 <>안에 자료형을 기입해야 한다.
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