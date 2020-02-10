//C/C++ 동적할당

//C
#include <stdio.h>
#include <stdlib.h>
int main() {
	int *p;

	p = (int *)malloc(sizeof(int) * 4);
	*p = 10;

	printf("%d", *p);

	free(p);

	return 0;
}

//C++
#include <iostream>
int main() {
	int *p = new int;
	*p = 10;

	std::cout << *p << std::endl;

	delete p;

	return 0;
}

// https://modoocode.com/169