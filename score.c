#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    float assign,midterm,final,overall,a,b,c;
    printf("assignment score : ");
    scanf("%f",&assign);
    printf("midterm : ");
    scanf("%f",&midterm);
    printf("final : ");
    scanf("%f",&final);
    a=assign*0.1;
    b=midterm*0.4;
    c=final*0.5;
    overall=a+b+c;
    printf("%.2f",overall);
    return 0;
}