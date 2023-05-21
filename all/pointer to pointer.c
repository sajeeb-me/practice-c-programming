#include<stdio.h>

int main()
{
    int a=2;
    int* p = &a;
    int** q = &p;

    **q=5;

    printf("%d\n", a);
    printf("%p\n", p);

    return 0;
}

