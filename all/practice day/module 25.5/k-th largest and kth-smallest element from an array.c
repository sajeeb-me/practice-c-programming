#include<stdio.h>

void sort_array(int n, int arr[]);
int find_kth_largest(int n, int k,int arr[]);
int find_kth_smallest(int k,int arr[]);

int main()
{
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int k;
    scanf("%d", &k);

    sort_array(n,arr);

    int kth_largest = find_kth_largest(n,k,arr);
    int kth_smallest = find_kth_smallest(k,arr);

    printf("%dth largest element = %d\n%dth smallest element = %d",k,kth_largest,k,kth_smallest);

    return 0;
}
void sort_array(int n, int arr[])
{
    int i,j, temp;
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int find_kth_largest(int n, int k,int arr[])
{
    return arr[n-k];
}
int find_kth_smallest(int k,int arr[])
{
    return arr[k-1];
}
