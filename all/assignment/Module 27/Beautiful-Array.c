#include<stdio.h>

void is_beautiful(int n,int arr[]);
void get_result(int* count,int* num);

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    is_beautiful(n,arr);

    return 0;
}
void is_beautiful(int n,int arr[])
{
    int t, count=0;
    t = n/2 + n%2;

    for(int i=0; i<n; i++)
        get_result(&count, (arr+i));

    if(count>=t)
        printf("Beautiful");
    else
        printf("Ugly");
}
void get_result(int* count, int* num)
{
    while(*num>0)
    {
        if(*num%10==7)
        {
            *count = *count+1;
            break;
        }
        *num = *num/10;
    }
}
