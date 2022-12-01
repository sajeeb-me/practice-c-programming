#include<stdio.h>

void sort_arr(int n, int arr[]);
void swap(int* i, int* j);

int main()
{
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    sort_arr(n,arr);

    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
void sort_arr(int n, int arr[])
{
    int i,j;
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            swap((arr+i),(arr+j));
        }
    }
}
void swap(int* i, int* j)
{
    int temp;
    if(*i>*j)
    {
        temp = *i;
        *i = *j;
        *j = temp;
    }
}
