/*#include<stdio.h>
int main()
{
	char ch;// C
	char s[8];// Language
	char sen[14];// Welcome To C!!
	scanf("%c\n", ch);
	printf("%c\n", ch);
	scanf("%s\n", s);
	printf("%s\n", s);
	scanf("%[^\n]s", sen);// Use scanset to input sentence!
	printf("%s", sen);
	return 0;
}*/
#include <stdio.h>
  
// Driver code
int main()
{
    char sen[100];
    scanf("%[^\n]s", sen);
    printf("Output : %s", sen);
    return 0;
}