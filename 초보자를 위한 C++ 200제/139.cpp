//139
//atomic 사용하기(add,sub)
#include <iostream>
#include <atomic> //atomic을 사용하기 위해 include

using namespace std;

int main()
{
	atomic<int> data1 = 1; //atomic 변수를 선언
	data1++; //값 증가
	data1 += 1; //값 증가
	data1.fetch_add(1); //값 증가
	atomic_fetch_add(&data1, 1); //값 증가

	atomic<int> data2 = 100; //atomic 변수를 선언
	data2--; //값 감소
	data2 -= 1; //값 감소
	data2.fetch_sub(1); //값 감소
	atomic_fetch_sub(&data2, 1); //값 감소

	cout << "data1 : " << data1 << ", data2 : " << data2 << endl; //결과 출력.

	return 0;
}

/*
C++ 11 표준 라이브러리에는 promise, future, async 클래스가 추가되었다.
병목 현상을 방지하고 프로그램의 응답성을 향상할 수 있는 것으로 비동기 프로그래밍 함수이다.
C#의 Async, Await와 비슷한 클래스이다.

그동안 멀티스레드 환경에서 동기화를 위해 여러 기법이 도입되었으나 코드 구현량이 많고 에러가 발생할 경우 원인을 파익하는데 시간이 오래 걸리는 문제가 있었다.

또한 통신 프로그램은 데이터 송수신 과정에서 발생하는 응답시간 지연 문제 등도 있었다.
하지만 비동기로 코드를 구현하면 이런 문제에서 보다 자유로워질 수 있다.

promise는 자바스크립트의 promise와 유사한 것으로 함수 호출 후 응답을 바로 기다리지 않고 언젠지모를 응답 시점이 되면 알아서 결과를 반환한다.

이 시리즈에선 비동기 응용 예제를 다루지 않지만 배워두면 쓸모 있다.
또한 비동기의 전체 개념은 업종, 분야, 언어를 가리지 않고 똑같기에 적용 범위도 넓다.
그러나 통신, 멀티스레드 환경 등을 구현할땐 비동기 코드도 알아보고 적용 방법을 고민하는 것을 추천한다.
*/