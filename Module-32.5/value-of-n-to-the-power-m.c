#include<stdio.h>

int solve(int a, int b)
{
    if(b==0) return 1;
    return a*solve(a, b-1);
}

int main()
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    int anss = solve(n1, n2);
    printf("%d", anss);

    return 0;
}
