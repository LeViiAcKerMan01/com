 #include<stdio.h>
int main()
{
	int length=11;
	int width=13;
	printf("Area is: %d",length*width);
	printf("Perimeter is: %d", 2*(length+width));
	width=15;
	printf("Area is: %d",length*width);
	printf("Perimeter is: %d",2*(length+width));
	return 0;
}
