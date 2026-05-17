#include<stdio.h>

int main(void)
{
    int x; 
    printf("please input a number x:");
    scanf("%d", &x);
    printf("the tens of x is:%d\nthe units of x is:%d\n", x/10, x%10);
    return 0;
}