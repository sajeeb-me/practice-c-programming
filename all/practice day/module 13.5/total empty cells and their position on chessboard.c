#include<stdio.h>

int main()
{
    int i, j, k, a=3, b=3;
    int r;
    scanf("%d", &r);
    int arr[r], x,y;

    for(i=0;i<r;i++)
    {
        scanf("%d %d", &x, &y);
        arr[i]= x+y;
    }

    for(i=1;i<=a;i++)
    {
        for(j=1;j<=b;j++)
        {
            for(k=0;j<r;j++)
            {
                if(arr[k]!=i+j)
                {
                    printf("%d %d\n", i,j);
                }
            }
        }
        printf("\n");
    }

    return 0;
}
