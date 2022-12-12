#include<stdio.h>

int solve(int arr[], int n)
{
    if(n==0) return 0;
    return (arr[0]%10)+solve(arr+1,n-1);
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    int anss = solve(arr,n);
    printf("%d", anss);

    return 0;
}

