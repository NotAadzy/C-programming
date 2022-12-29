#include<stdio.h>
int main()
{
    int x;
    printf("enter value of x:");
    scanf("%d", &x);
    if(x>0)
        printf("Y = 1");
    else if(x==0)
        printf("Y = 0");
    else if(x<0)
        printf("Y = -1");
    return 0;

}
