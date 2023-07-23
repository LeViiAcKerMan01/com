#include<stdio.h>
#include<stdlib.h>

int main()
{
int arr[]= {4, 8, 9, 23, 43, 68};
arr[3] = 4;
arr[4] = 2;
printf("%d",arr[3]+arr[4]);
return 0;
}