#include<stdio.h>

int main()
{
    int a=7;
    double b=8.5;
    int* pi;
    double* pd;

    pi=&a;
    pd=(double*)pi;

    printf("%d %lf\n", a,b);
    printf("%p %p\n", pi,pd);

    return 0;
}
