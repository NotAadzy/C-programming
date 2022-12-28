#include<stdio.h>
int main()
{
    int years, weeks, days, n;
    printf("enter the number of days:");
    scanf("%d", &n);

    years= n/365;
    weeks= (n%365)/7;
    days= (n%365)%7;

    printf("the number of years:%d\n", years);
    printf("the number of weeks:%d\n", weeks);
    printf("the number of days:%d\n", days);

    return 0;

}
