#include<stdio.h>

void matrix_multiply(int r, int c);

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    matrix_multiply(n,m);

    return 0;
}
void matrix_multiply(int r, int c)
{
    int i, j, k, temp=0;
    int arr1[r][c], arr2[r][c], result[r][c];

    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
            scanf("%d", &arr1[i][j]);

    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
            scanf("%d", &arr2[i][j]);

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            for(k=0;k<c;k++)
            {
                temp += arr1[i][k]*arr1[k][j];
            }
            result[i][j] = temp;
            temp = 0;
        }
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}
