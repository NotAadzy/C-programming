#include<stdio.h>
int main()
{
    float tw,te,fi,pai,tl;
    printf("enter the number of twenty rupees notes:");
    scanf("%f", &tw);
    printf("enter the number of ten rupees notes:");
    scanf("%f", &te);
    printf("enter the number of five rupees coins:");
    scanf("%f", &fi);
    printf("enter the number of fifty paisa coins:");
    scanf("%f", &pai);

    tw= tw*20;
    te= te*10;
    fi= fi*5;
    pai= pai*0.5;


    tl= tw+te+fi+pai;

    printf("the total amount of money is %f", tl);
    return 0;

}
