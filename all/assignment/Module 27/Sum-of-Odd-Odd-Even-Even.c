#include<stdio.h>

int get_sum(int n,int arr[]);

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    int sum = get_sum(n,arr);
    printf("%d", sum);

    return 0;
}
int get_sum(int n,int arr[])
{
    int i,sum=0;
    for(i=1; i<=n; i++)
        if((i%2==0 && arr[i-1]%2==0) || (i%2==1 && arr[i-1]%2==1))
            sum += (i+arr[i-1]);

    return sum;
}
