#include<stdio.h>

int get_value(int n,int arr[],int k);

int main()
{
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    int k;
    scanf("%d", &k);

    int value = get_value(n,arr,k);
    printf("%d", value);

    return 0;
}
int get_value(int n,int arr[],int k)
{
    int i, count=0;
    for(i=0;i<n;i++)
    {
        if(arr[i] != k)
            count++;
    }
    return count;
}
