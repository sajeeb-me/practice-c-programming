#include<stdio.h>

int main()
{
    int i,t;
    scanf("%d", &t);
    int s,a,b,c, num;

    for(i=0;i<t;i++)
    {
        scanf("%d %d %d %d", &s, &a, &b, &c);
        num = s-(a+b+c);
        printf("%d", num);
        printf("\n");
    }


    return 0;
}
