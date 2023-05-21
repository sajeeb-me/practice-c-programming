#include<stdio.h>

void transpose_matrix(int matrix[3][3]);

int main()
{
    int i,j, matrix[3][3];

    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            scanf("%d", &matrix[i][j]);

    transpose_matrix(matrix);

    return 0;
}
void transpose_matrix(int matrix[3][3])
{
    int i,j, new_matrix[3][3];

    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            new_matrix[i][j] = matrix[j][i];

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            printf("%d ", new_matrix[i][j]);
        printf("\n");
    }
}
