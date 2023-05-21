#include<stdio.h>

int main()
{
    int n,k,i,result=0;
    scanf("%d %d", &n, &k);
    int arr[101];

    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0;i<n;i++)
    {
        if(arr[i]<k)
        {
            result++;
        }
    }

    printf("%d", result);

    return 0;
}

