#include<stdio.h>

int add_number(int n, int arr[]);

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    int sum = add_number(n,arr);
    printf("%d", sum);

    return 0;
}
int add_number(int n, int arr[])
{
    int i, sum=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]%10==0)
            sum += arr[i];
    }

    return sum;
}
