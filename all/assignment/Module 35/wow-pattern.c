#include<stdio.h>

void makePattern(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
            printf(" ");
        for(int j=1; j<i*2; j++)
        {
            if(i%2==0)
                printf("*");
            else
                printf("^");
        }
        printf("\n");
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    makePattern(n);

    return 0;
}
