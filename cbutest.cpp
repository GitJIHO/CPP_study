#include <stdio.h>

int main(void) {
	
	int num, result;

	printf("정수를 입력하시오 : ");

	scanf("%d", &num);

	result = ~num;

	result += 1;

	printf("2의 보수 : %d\n", result);

	return 0;

	//test

}
