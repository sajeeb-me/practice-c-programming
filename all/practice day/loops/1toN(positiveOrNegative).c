#include<stdio.h>

int main()
{
    int i, N;
    printf("Please enter a number: ");
    scanf("%d", &N);

    if(N>0)
    {
        for(i=1;i<=N;i++)
        {
            printf("%d ",i);
        }
    }
    else
    {
        for(i=1;i>=N;i--)
        {
            printf("%d ",i);
        }
    }

    return 0;
}
