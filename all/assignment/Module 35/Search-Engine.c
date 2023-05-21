#include<stdio.h>

void searchEngine(int a);
int findNumber(int n, int arr[], int num);

int main()
{
    int t;
    scanf("%d", &t);

    for(int i=1; i<=t; i++)
        searchEngine(i);

    return 0;
}
void searchEngine(int a)
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    int num;
    scanf("%d", &num);

    int result = findNumber(n,arr,num);
    if(result == -1)
        printf("Case %d: Not Found\n", a);
    else
        printf("Case %d: %d\n", a, result);
}
int findNumber(int n, int arr[], int num)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i]==num)
            return i+1;
    }
    return -1;
}
