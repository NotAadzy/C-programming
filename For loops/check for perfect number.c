#include<stdio.h>
int main()
{
    int n,i, div=0;
    printf("enter a number:");
    scanf("%d", &n);

    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            div=div+i;
        }
    }
    if(div==n)
        printf("%d is a perfect number.",n);
    else
        printf("%d is not a perfect number.",n);
    return 0;
}
