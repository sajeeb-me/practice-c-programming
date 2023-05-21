#include<stdio.h>

int main()
{
    int i,j,n,q,x,v;
    scanf("%d", &n);
    int arr[n];

    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &q);
    for(j=0;j<q;j++)
    {
        scanf("&d &d", &x, &v);
        arr[x] = arr[x]+v;
    }

    for(i=0;i<n;i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}
