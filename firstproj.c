#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int x = 13-25/2*3+3*12%3+2;
    float y = 13-25.0/2*3+3*12%3+2;
    int z = -17*(3/3)+-9*2;
    printf("%d %f %d",x,y,z);
    return EXIT_SUCCESS;
}