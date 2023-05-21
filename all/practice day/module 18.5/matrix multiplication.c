#include<stdio.h>

int main()
{
    int i,j,k,n,m,arr1[100][100],arr2[100][100],matrix[100][100], sum=0;
    scanf("%d%d", &n,&m);

    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
            scanf("%d", &arr1[i][j]);

    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
            scanf("%d", &arr2[i][j]);

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            for(k=0; k<m; k++)
            {
                sum += arr1[i][k] * arr2[k][j];
            }
            matrix[i][j] = sum;
            sum = 0;
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }

    return 0;
}
