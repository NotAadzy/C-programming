#include<stdio.h>
int main()
{
    int n,k,i,j,sum=0;
    printf("enter the number of tables:");
    scanf("%d", &n);
    printf("enter the number upto which tables is needed:");
    scanf("%d", &k);

    for(j=1;j<=n;j++)
    {
        for(i=1;i<=k;i++)
        {
            sum=i*j;
            printf("%d\t", sum);
        }
        printf("\n");
    }
    return 0;

}
