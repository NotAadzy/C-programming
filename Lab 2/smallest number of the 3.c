int main()
{
    int a,b,c;
    printf("enter first number:");
    scanf("%d", &a);
    printf("enter second number:");
    scanf("%d", &b);
    printf("enter third number:");
    scanf("%d", &c);

    if(a<b)
    {
        if(a<c)
        {
            printf("%d is the smallest number", a);
        }
    }
    else if(b<a)
    {
        if(b<c)
        {
            printf("%d is the smallest number", b);
        }
    }
    else
        printf("%d is the smallest number", c);

    return 0;
}
