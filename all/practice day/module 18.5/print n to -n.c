#include<stdio.h>

int main()
{
    int i, n;
    scanf("%d", &n);

    if(n>0)
    {
        for(i=n; i>0; i--)
        {
            printf("%d ", i);
        }
        for(i=0; i>=-n; i--)
        {
            printf("%d ", i);
        }
    }
    else
    {
        for(i=n; i<0; i++)
        {
            printf("%d ", i);
        }
        for(i=0; i<=-n; i++)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
