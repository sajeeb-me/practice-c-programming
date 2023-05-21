#include<stdio.h>

int makePattern(int n);

int main()
{
    int n;
    scanf("%d", &n);

    makePattern(n);

    return 0;
}
int makePattern(int n)
{
    int i, j;

    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
            printf(" ");
        for(j=0; j<(n+(n-1))-(i*2); j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
