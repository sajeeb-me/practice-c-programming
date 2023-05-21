#include<stdio.h>

int willOpen(int x, int arr[]);

int main()
{
    int i, j, test;
    scanf("%d", &test);

    for(i=0; i<test; i++)
    {
        int x, arr[5];
        scanf("%d", &x);

        for(j=0; j<3; j++)
        {
            scanf("%d", &arr[j]);
        }
        int res = willOpen(x, arr);
        if(res)
            printf("Yes");
        else
            printf("No");

        printf("\n");
    }

    return 0;
}
int willOpen(int x, int arr[])
{
    if(arr[x-1]==0)
        return 0;

    else
    {
        int a = arr[x-1];
        if(arr[a-1]==0)
            return 0;
        else
            return 1;
    }
}
