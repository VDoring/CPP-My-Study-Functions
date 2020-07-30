//027
//쉼표 연산자 이해하기(,)

#include <iostream>

using namespace std;

int main()
{
	int goguryeo = 37, baekjae = 18, silla = 57;

	printf("삼국 건국연도");
	printf("고구려 bc%d년, 백제 bc%d년, 신라bc%d년\n", goguryeo, baekjae, silla);

	return 0;
}

/*
쉼표 연산자는 비슷한 의미의 코드를 이어 붙이는데 사용된다.

하지만 이것은 좋은 습관이 아니다.

흐름 상 소스 코드는 가로로 읽어야 하지만 코드가 길어지면 가독성에 문제가 생겨
일부 회사에선 한 라인을 30, 50, 70 문자로 제한하는 내부 규칙을 사용한다.

또, 한 라인에서 여러 변수를 선언하면 몇 개의 변수가 있는지 파악하기 힘든 문제도 있다.

그래서 한 줄엔 변수 한 개를 선언하는 것에 좋다.
*/