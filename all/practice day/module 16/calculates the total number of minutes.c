#include<stdio.h>

int main()
{
    int h,m,t;
    scanf("%d %d", &h, &m);

    t = (h*60)+m;

    printf("%d", t);

    return 0;
}
