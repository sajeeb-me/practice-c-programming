#include<stdio.h>

void print_arr(int* n);

int main()
{
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);

    for(i=0;i<n;i++)
        print_arr(arr+i);

    return 0;
}
void print_arr(int* n)
{
    printf("%d ", *n);
}
