#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    float price,rate,dis,result;
    printf("price : ");
    scanf("%f",&price);
    printf("discount rate : ");
    scanf("%f",&rate);
    dis = price*rate/100;
    result = price-dis;
    printf("discount price is : %.2f",result);
    return 0;
}