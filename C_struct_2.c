#include <stdio.h>

typedef struct a 
{
	int m;
}Age; //typedef를 사용하여 struct a 대신 Age를 쓰면 되게끔 만들어 주었다.

int main(void)
{
	Age happy;

	printf("나이를 입력하시오. : ");
	scanf_s("%d", &happy.m);

	printf("당신의 나이는 %d세입니다.\n", happy.m);

	return 0;
}