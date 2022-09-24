#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int isSquare(int n)
{
	int i;
	i = sqrt(n);
	if (i * i == n) return 1;
	else return 0;
}
int main()
{
	int n;
	printf("please input");
	scanf("%d", &n);
	if (isSquare(n))printf("%d is square num", n);
	return 0;
}