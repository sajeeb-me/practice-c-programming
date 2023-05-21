
#include<stdio.h>

int main()
{
    int i, n;
    scanf("%d", &n);
    int arr[21];

    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }

    int k;
    scanf("%d", &k);

    if(k>0)
    {
        for(i=k;i<n;i++)
            printf("%d ", arr[i]);
        for(i=0;i<k;i++)
            printf("%d ", arr[i]);
    }
    else
    {
        for(i=0;i<n;i++)
            printf("%d ", arr[i]);
    }

    return 0;
}
