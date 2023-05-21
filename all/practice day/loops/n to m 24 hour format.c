#include<stdio.h>

int main()
{
    int i, N, M;
    printf("Please type a number: ");
    scanf("%d %d", &N, &M);

    if(N>M)
    {
        for (i=N;i<=M+24;i++)
        {
            printf("%d ",i%24);
        }
    }
    else
    {
        for(i=N;i<=M;i++)
        {
            printf("%d ",i);
        }
    }

    return 0;
}


