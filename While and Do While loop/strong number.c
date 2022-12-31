#include<stdio.h>
int main()
{
    int n, temp, r,i,fact, str=0;
    printf("enter a number:");
    scanf("%d", &n);
    temp=n;
    while(n>0)
    {
        fact=1;
        r=n%10;
        for(i=1;i<=r;i++)
            fact=fact*i;
        str=str+fact;
        n=n/10;
    }
    if(str==temp)
        printf("strong number.");
    else
        printf("not a strong number.");
    return 0;
}
