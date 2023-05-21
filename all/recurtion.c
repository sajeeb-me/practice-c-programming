#include<stdio.h>

int recurtion(int n)
{
    int ans;
    if(n>0)
    {
        ans = n*recurtion(n-1);
        return ans;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("%d",recurtion(n));

    return 0;
}
