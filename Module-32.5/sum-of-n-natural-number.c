#include<stdio.h>

int solve(int n)
{
    if(n==0) return 0;
    return n+solve(n-1);
}

int main()
{
    int n;
    scanf("%d", &n);

    int anss = solve(n);
    printf("%d", anss);

    return 0;
}


