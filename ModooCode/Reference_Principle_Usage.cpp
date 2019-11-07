
/* 레퍼런스 정의 방법 */
int& ref = number; //number에 다른 이름인 ref 부여.
					//별명을 지어준 것이라 생각하기

//레퍼런스는 선언시 초기화되어야 한다. 즉
int &ref;
//와 같은 코드는 안된다.



/* 레퍼런스는 한번 초기화되면 다른 변수의 별명이 될 수 없다! */
int a = 10;
int &ref = a;
int b = 3;
ref = b;
//가 있을때
&ref = b;//를 하면 ref가 b를 가리키지 않고, a = b. 즉 a에 3이 대입된다.



/* 레퍼런스와 포인터의 차이 */
int number = 10;

int& ref = number; //레퍼런스
int* p = &number; //포인터

ref++;
//ref는 number의 다른 이름이다.
//즉 number++; 와 동일

p++;
//int의 크기는 4이므로, p++는 4가 증가하게 된다.
//정상적인 값 출력X



/* 레퍼런스와 함수 사용의 예시 */
change_value(number); //함수에 number를 넣음

int change_value(int *p) { // int &p = number;가 된다. 즉, p는 number의 별명이 된다.
	p = 3; //그래서, p = 3은 number = 3과 동일

	return 0;
}