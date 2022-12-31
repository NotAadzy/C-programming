#include<stdio.h>
int main()
{
    int b,a,i,j, counter=0;
    printf("enter first limit:");
    scanf("%d", &a);
    printf("enter second limit:");
    scanf("%d", &b);
    for(i=a;i<=b;i++)
    {
    counter=0;
    for(j=1;j<=i;j++)
    {

      if(i%j==0)
            counter++;

    }
     if(counter==2)
    {
     printf("the prime numbers are %d\n", i);;
    }
    }
    return 0;
}
