#include<stdio.h>
int main()
{
	int mile;
	float km;
	scanf("%d\n", &mile);
	km = 1.60 * mile;
	printf("%.2f", km);
	return 0;
}//Miles to km convertor
