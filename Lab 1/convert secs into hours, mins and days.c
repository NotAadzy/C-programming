#include<stdio.h>
int main()
{
    int t,h,m,s;
    printf("enter the number of secs:");
    scanf("%d", &t);

    h= t/3600;
    m=t%3600/60;
    s=t%3600%60;

    printf("the number of hours is: %d\n", h);
    printf("the number of mins is: %d\n", m);
    printf("the number of secs is: %d\n", s);
    return 0;

}
