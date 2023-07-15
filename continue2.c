#include<stdio.h>
int main()
{
    int i;	
    int n;
    scanf("%d", &n);
    for(i=0; i<=15; i++){
        if(i==n){
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}
