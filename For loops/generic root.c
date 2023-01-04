#include<stdio.h>
int main()
{
    int n,rem, temp, sum=0;
    printf("enter a number:");
    scanf("%d", &n);
    temp=n;
    while(temp>0)
    {
        rem= temp%10;
        sum= sum+rem;
        temp= temp/10;



    if(temp==0)
    {
        if(sum>9)
            {temp=sum;
            sum=0;

    }


}
    }
     printf("the generic root of %d is %d", n, sum);
return 0;
}
