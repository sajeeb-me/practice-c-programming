#include<stdio.h>

int divisible_by_three(int n,int arr[]);
int divisible_by_five(int n,int arr[]);

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    int three = divisible_by_three(n,arr);
    int five = divisible_by_five(n,arr);

    int total = three+five;
    if(total==0)
        printf("-1");
    else
        printf("%d", total);

    return 0;
}
int divisible_by_three(int n,int arr[])
{
    int i, count=0;
    for(i=0; i<n; i++)
        if(arr[i]%3==0)
            count++;

    return count;
}
int divisible_by_five(int n,int arr[])
{
    int i, count=0;
    for(i=0; i<n; i++)
        if(arr[i]%5==0 && arr[i]%3!=0)
            count++;

    return count;
}
