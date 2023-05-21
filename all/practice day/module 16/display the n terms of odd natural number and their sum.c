#include<stdio.h>

int main()
{
    int i,n, sum=0;
    scanf("%d", &n);

    for(i=1;i<n*2;i+=2)
    {
        printf("%d ", i);
        sum+=i;
    }
    printf("\n%d", sum);

    return 0;
}
