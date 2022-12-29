#include<stdio.h>
int main()
{
    int n;

    printf("enter the number of days post return date:");
    scanf("%d", &n);

    if(n<5)
        printf("No fine");
    else if(n==5)
        printf("The fine is 0.5 rupees");
    else if(n>=6 && n<=10)
        printf("The fine is 1 rupees");
    else if(n>10 && n<30)
        printf("The fine is 5 rupees");
    else if(n>30)
        printf("The fine is 10 rupees");

    return 0;

}
