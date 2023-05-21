#include<stdio.h>

void swap(int* x,int* y);

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    int s, x, y;
    scanf("%d", &s);
    for(int i=0; i<s; i++)
    {
        scanf("%d %d", &x, &y);
        swap((arr+(x-1)),(arr+(y-1)));
    }

    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);

    return 0;
}
void swap(int* x,int* y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
