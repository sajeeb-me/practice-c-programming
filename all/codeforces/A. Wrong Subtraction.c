#include<stdio.h>

int main()
{
    int i,k;
    long long int n;
    scanf("%lld %d", &n, &k);

    for(i=0; i<k; i++)
    {
        if(n%10==0)
        {
            n/=10;
        }
        else
        {
            n--;
        }
    }
    printf("%lld",n);

    return 0;
}
