#include<stdio.h>

int getDivisors(int n);

int main()
{
    int n;
    scanf("%d", &n);

    getDivisors(n);

    return 0;
}
int getDivisors(int n)
{
    int i;

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            printf("%d ", i);
    }
}
