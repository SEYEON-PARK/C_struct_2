#include <stdio.h>

typedef struct a 
{
	int m;
}Age; //typedef�� ����Ͽ� struct a ��� Age�� ���� �ǰԲ� ����� �־���.

int main(void)
{
	Age happy;

	printf("���̸� �Է��Ͻÿ�. : ");
	scanf_s("%d", &happy.m);

	printf("����� ���̴� %d���Դϴ�.\n", happy.m);

	return 0;
}