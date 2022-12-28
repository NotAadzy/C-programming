#include<stdio.h>
int main()
{
    int a,b,s,d,p,q;
    printf("enter a number:");
    scanf("%d", &a);
    printf("enter a second number:");
    scanf("%d", &b);

    s= a+b;
    p= a*b;
    d= a-b;
    q= a%b;

    printf("the sum is %d\n", s);
    printf("the difference is %d\n", d);
    printf("the product is %d\n", p);
    printf("the quotient is %d\n", q);
    return 0;
}
