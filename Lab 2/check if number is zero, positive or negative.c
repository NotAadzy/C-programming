#include<stdio.h>
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d", &n);

    if(n<0)
        printf("%d is a negative number",n);
    else if(n==0)
        printf("The number is zero", n);
    else if(n>0)
        printf("%d is a positive number",n);
    return 0;
}
