#include<stdio.h>
int main()
{
	char ch;// C
	char s[8];// Language
	char sen[14];// Welcome To C!!
	scanf("%c\n", ch);
	printf("%c\n", ch);
	scanf("%s\n", s);
	printf("%s\n", s);
	scanf("%[^\n]", sen);// Use scanset to input sentence!
	printf("%s", sen);
	return 0;
}
