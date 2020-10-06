//175
//영역의 최소, 최대값 확인하기(minmax_element)
#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

int main()
{
	std::array<int, 5> data{ 5,9,4,1,7 }; //정수형 array를 선언하며 5,9,4,1,7로 초기화한다.

	auto result1 = minmax_element(data.begin(), data.end()); //minmax_element 함수에 data의 시작과 끝 위치를 인자로 전달한다. 결과는 result1에 담긴다.

	std::cout << "최소값 : " << *result1.first; //minmax_element 함수의 리턴값에는 컨테이너의 위치 2개가 담겨있다. 첫 번쨰는 컨테이너의 최소값 위치, 두 번쨰는 컨테이너의 최대값 위치이다. 실제 값을 출력할 때는 위치를 담고 있기 때문에 포인터 연산자를 이용한다. 그리고 16, 18번 라인처럼 시작 위치에서 해당 위치를 빼면 인덱스 위치가 나타난다. 결과는 각각 1,3,9,1 이다.
	std::cout << ", 위치 : " << (result1.first - data.begin()) << '\n';
	std::cout << "최대값 " << *result1.second;
	std::cout << ", 위치 : " << (result1.second - data.begin()) << "\n";

	auto result2 = minmax_element(data.begin(), data.end(), [](int arg1, int arg2) { //minmax_element에 세 번쨰 인자로 람다 함수를 정의한다. 13번과 결과가 똑같으니 되도록 13번 라인처럼 축약해 사용하는 것이 좋다.
		return arg1 < arg2;
	});

	std::cout << "최소값 : " << *result2.first; //15~18번 라인과 똑같다.
	std::cout << ", 위치 : " << (result2.first - data.begin()) << '\n';
	std::cout << "최대값 " << *result2.second;
	std::cout << ", 위치 : " << (result2.second - data.begin()) << "\n";

	return 0;
}

/*
정렬되지 않은 컨테이너의 일부 영역에서 최소값과 최대값을 확인할 때는 minmax_element 함수를 사용한다.
*/