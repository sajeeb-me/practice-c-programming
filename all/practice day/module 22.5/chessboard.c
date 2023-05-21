#include<stdio.h>

void safe_rooks(int n);

int main()
{
    int n;
    scanf("%d", &n);

    safe_rooks(n);

    return 0;
}
void safe_rooks(int n)
{
    int i, j, r=8, c=8, board[r][c];

    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
            board[i][j] = 0;

    for(i=0; i<n; i++)
    {
        int a,b;
        scanf("%d %d", &a, &b);
        board[a][b] = 1;
    }

    for(i=0; i<r; i++)
    {
        int count=0;
        for(j=0; j<c; j++)
        {
            if(board[i][j] == 1)
            {
                count++;
            }
        }
        if(count>1)
        {
            for(j=0; j<c; j++)
            {
                board[i][j]=0;
            }
        }
    }



//    for(i=0;i<r;i++)
//    {
//        for(j=0;j<c;j++)
//        {
//            printf("%d ", board[i][j]);
//        }
//        printf("\n");
//    }
}
