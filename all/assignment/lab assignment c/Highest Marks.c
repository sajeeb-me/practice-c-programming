#include<stdio.h>

int main()
{
    int i,n;
    scanf("%d", &n);
    int arr[101];

    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }

    int highest = arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>highest)
            highest = arr[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d ", (highest-arr[i]));
    }

    return 0;
}

