#include<stdio.h>

int main()
{
    int i,j,t;
    scanf("%d", &t);
    int arr[10001];

    for(i=0;i<t;i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0;i<t;i++)
    {
        if(arr[i]<=1)
        {
            arr[i]=0;
        }
        else
        {
            for(j=2;j<arr[i];j++)
            {
                if(arr[i]%j==0)
                {
                    arr[i]=0;
                    break;
                }
            }
        }
    }
    for(i=0;i<t;i++)
    {
        if(arr[i]==0)
            printf("No\n");
        else
            printf("Yes\n");
    }

    return 0;
}
