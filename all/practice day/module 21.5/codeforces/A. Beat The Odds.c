#include<stdio.h>

int beat_the_odds(long long int n, int arr[]);

int main()
{
    int j, t;
    scanf("%d", &t);
    for(j=0; j<t; j++)
    {
        int i;
        long long int n;
        scanf("%lld", &n);
        int arr[n];
        for(i=0; i<n; i++)
        {
            scanf("%d", &arr[i]);
        }
        int res = beat_the_odds(n, arr);
        printf("%d\n", res);
    }

    return 0;
}
int beat_the_odds(long long int n, int arr[])
{
    int i, odd=0, even=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
            even++;
        else
            odd++;
    }
    if(even>odd)
        return odd;
    else
        return even;
}
