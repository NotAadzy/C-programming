#include<stdio.h>
#include<math.h>
int main()
{
    float vol, sa;
    int r;
    printf("enter the radius:");
    scanf("%d", &r);

    sa= 4*3.14*pow(r,2);
    vol=4*3.14*pow(r,3)/3;

    printf("the surface area is %f\n", sa);
    printf("the volume is %f", vol);


    return 0;




}
