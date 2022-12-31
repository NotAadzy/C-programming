#include<stdio.h>
int main()
{
    int n,temp,r, arms=0;
    printf("enter a number:");
    scanf("%d", &n);
    temp=n;
    while(n>0)
    {
        r= n%10;
        arms= arms+ r*r*r;
        n=n/10;
    }
    if(arms==temp)
        printf("its an armstrong number.");
    else
        printf("not an armstrong number.");
    return 0;

}
