#include<stdio.h>
#include<stdbool.h>

void printFunc(int arr[][4], int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
//            printf(" %d ", arr[i][j]);
            if(arr[i][j]==-1) printf(" ");
            if(arr[i][j]==1) printf("X");
            if(arr[i][j]==2) printf("O");
            if(j<n) printf("\t|\t");
        }
        printf("\n");
        if(i<n) printf("_________________________________\n");
        printf("\n");
    }
}

int whoWin(int arr[][4], int n)
{
    for(int i=1; i<=n; i++)
    {
        if(arr[i][1]==arr[i][2] && arr[i][2]==arr[i][3] && arr[i][1]!=-1)
        {
            return arr[i][1];
        }
    }
    for(int i=1; i<=n; i++)
    {
        if(arr[1][i]==arr[2][i] && arr[2][i]==arr[3][i] && arr[1][i]!=-1)
        {
            return arr[1][i];
        }
    }
    if(arr[1][1]==arr[2][2] && arr[2][2]==arr[3][3] && arr[1][1]!=-1)
    {
        return arr[1][1];
    }
    if(arr[1][3]==arr[2][2] && arr[2][2]==arr[3][1] && arr[1][3]!=-1)
    {
        return arr[1][3];
    }
    return -1;
}

void printWin(int arr[][4], int n, int win)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
//            printf(" %d ", arr[i][j]);
            if(arr[i][j]==win)
            {
                if(arr[i][j]==1) printf("X");
                else printf("O");
            }
            else
            {
                printf(" ");
            }

            if(j<n) printf("\t|\t");
        }
        printf("\n");
        if(i<n) printf("_________________________________\n");
        printf("\n");
    }
}

int main()
{
    int n=3;
    int arr[4][4];

    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            arr[i][j]=-1;

    bool player1 = true;
    bool player2 = false;
    while(true)
    {
        printFunc(arr,n);
        if(player1 == true)
        {
            int a,b;
Flag1:
            printf("Turn to player1 (X). Input row and col number: ");
            scanf("%d %d", &a, &b);
            if(arr[a][b] != -1)
            {
                printf("Wrong move!\n");
                goto Flag1;
            }
            arr[a][b]=1;
            player1=false;
            player2=true;
        }
        else
        {
            int a,b;
Flag2:
            printf("Turn to player2 (O). Input row and col number: ");
            scanf("%d %d", &a, &b);
            if(arr[a][b] != -1)
            {
                printf("Wrong move!\n");
                goto Flag2;
            }
            arr[a][b]=2;
            player1=true;
            player2=false;
        }

        if(whoWin(arr,n)==1)
        {
            printf("Player1 won!\n");
            printWin(arr,n,1);
            break;
        }
        else if(whoWin(arr,n)==2)
        {
            printf("Player1 won!\n");
            printWin(arr,n,2);
            break;
        }
    }

    return 0;
}
