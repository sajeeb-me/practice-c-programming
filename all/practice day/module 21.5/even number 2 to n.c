#include<stdio.h>

int getEvenNum(int n);

int main()
{
    int n;
    scanf("%d", &n);

    getEvenNum(n);

    return 0;
}
int getEvenNum(int n)
{
    int i;

    if(n%2==0)
    {
        for(i=2; i<=n; i+=2)
            printf("%d ", i);
    }
    else
    {
        for(i=2; i<n; i+=2)
            printf("%d ",i);
    }
}
