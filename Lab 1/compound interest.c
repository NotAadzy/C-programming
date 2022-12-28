#include<stdio.h>
#include<math.h>
int main()
{
    int si, p,n,r;
    float ci;
    printf("enter principle:");
    scanf("%d", &p);
    printf("enter number of years");
    scanf("%d", &n);
    printf("enter rate:");
    scanf("%d",&r);

    si= (p*n*r)/100;
    ci=p* pow(1.0+r/100.0,n)-p;

    printf("the SI is %d\n",si );
      printf("the CI is %f\n",ci );
      return 0;
}
