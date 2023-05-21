#include<stdio.h>

void pass_by_value(int x,int y);
void pass_by_referece(int* x,int* y);

int main()
{
    int a=5,b=10;
    printf("Before changes: a = %d, b = %d\n", a,b);

    pass_by_value(a,b);
    printf("After pass by value: a = %d, b = %d\n", a,b);

    pass_by_referece(&a,&b);
    printf("After pass by referece: a = %d, b = %d\n", a,b);

    return 0;
}
void pass_by_value(int x,int y)
{
    int temp = x;
    x=y;
    y=temp;
}
void pass_by_referece(int* x,int* y)
{
    int temp = *x;
    *x=*y;
    *y=temp;
}
