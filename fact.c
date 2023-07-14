#include<stdio.h>
int main()
{
	int i;
	int n;
	scanf("%d", &n);
	int fact = 1;
	for (i=1; i<=n; i++){
		fact = fact*i;
	}
	printf("The factorial of the given number is:%d", fact);
	return 0;
}

