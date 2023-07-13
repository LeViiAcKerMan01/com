#include<stdio.h>
int main()
{
	int a;
	int b;
	float c;
	float d;
	scanf("%d %d\n", &a, &b);
	printf("%d %d\n", a, b);
	scanf("%f %f\n", &c, &d);
        printf("%.1f %.1f", c, d);
	return 0;
}
