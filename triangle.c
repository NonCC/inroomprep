#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    float base,height,result;
    scanf("%f %f",&base,&height);
    result = 0.5*base*height;
    printf("%.2f",result);
    return 0;
}