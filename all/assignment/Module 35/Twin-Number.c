#include<stdio.h>

int findTwinNumber(int a, int b);

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int twinNumber = findTwinNumber(a,b);
    printf("%d", twinNumber);

    return 0;
}
int findTwinNumber(int a, int b)
{
    return (b-a)/2;
}
