#include<stdio.h>

int main()
{
    int i, n, sum=0;
    scanf("%d", &n);
    int arr[n];

    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
        sum += (arr[i]%10);
    }

    printf("Sum = %d", sum);

    return 0;
}
