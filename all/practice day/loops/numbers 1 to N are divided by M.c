#include<stdio.h>

int main()
{
    int i, N, M;
    printf("Please type two numbers: ");
    scanf("%d %d", &N, &M);

    for (i=M;i<=N;i++)
    {
        if(i%M==0)
        {
            printf("%d ",i);
        }
    }

    return 0;
}
