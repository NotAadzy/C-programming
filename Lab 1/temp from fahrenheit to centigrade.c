#include<stdio.h>
int main()
{
    float c,f;
    printf("enter temperature in fahrenheit:");
    scanf("%f", &f);
    c= 5/9*(f-32);
    printf("temperature in centigrade is: %f", c);
    return 0;

}
