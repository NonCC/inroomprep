#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
    float x,y,z;
    scanf("%f",&x);
    y=sqrt(x);
    z=log10(x);
    printf("%f %f",y,z);
    return 0;
}