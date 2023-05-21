#include<stdio.h>

int getNumbers(int n);

int main()
{
    int n;
    scanf("%d", &n);

    getNumbers(n);

    return 0;
}
int getNumbers(int n)
{
    int i;

    if(n>0)
    {
        for(i=n; i>=-n; i--)
            printf("%d ", i);
    }
    else
    {
        for(i=n; i<=-n; i++)
            printf("%d ", i);
    }
}
