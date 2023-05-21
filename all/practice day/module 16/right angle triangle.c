#include<stdio.h>

int main()
{
    int i,j,n,p=0;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            p++;
            printf("%d ",p);
        }
        printf("\n");
    }

    return 0;
}
