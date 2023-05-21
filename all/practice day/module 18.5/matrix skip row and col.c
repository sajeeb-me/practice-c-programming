#include<stdio.h>

int main()
{
    int i,j,n;
    scanf("%d", &n);
    int arr[n][n];

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    return 0;
}
