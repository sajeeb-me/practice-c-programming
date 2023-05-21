#include<stdio.h>

void sortAscending(int a[], int n);
void sortDescending(int a[], int n);

int main()
{
    int n;
    scanf("%d", &n);
    int a[n], b[n];

    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);

    for(int i=0; i<n; i++)
        scanf("%d", &b[i]);

    sortAscending(a, n);
    sortDescending(b, n);

    for(int i=0; i<n; i++)
        printf("%d ", a[i]-b[i]);

    return 0;
}
void sortAscending(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            int temp;
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
void sortDescending(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            int temp;
            if(a[i]<a[j])
            {
                temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
