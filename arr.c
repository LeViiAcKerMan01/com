#include<stdio.h>
int main()
{
	int *mnts[] = {"Monday","Tuesday","Friday","Thursday"};
	mnts[2] = "Wednesday";
	printf("The third day in the week is: %s", mnts[2]);
	return 0;
}
