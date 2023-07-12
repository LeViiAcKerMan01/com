#include<stdio.h>
#include<string.h>
int main()
{
	char x[40] = "Priyanshu says ";
	char y[] = "C is great";
	strcat(x,y);
	printf("%s", x);
	return 0;
}
