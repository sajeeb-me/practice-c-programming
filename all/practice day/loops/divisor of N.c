#include<stdio.h>

int main()
{
    int i, N;
    printf("Please type a number: ");
    scanf("%d", &N);

    for (i=1;i<=N;i++)
    {
        if(N%i==0)
        {
            printf("%d ",i);
        }
    }

    return 0;
}

