#include<stdio.h>

int main()
{
    int a=2;
    int* p;
    int* q;

    p=&a;
    q=p;
    *q=5;

    printf("%d\n", a);
    printf("%p\n", p);

    return 0;
}
