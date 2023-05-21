#include<stdio.h>

void tTimes();
int getGCD(int* a, int* b);

int main()
{
    int t;
    scanf("%d", &t);

    for(int i=0; i<t; i++)
        tTimes();

    return 0;
}
void tTimes()
{
    int n, count=0;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i!=j)
            {
                int gcd = getGCD((arr+i), (arr+j));
                if(gcd==1)
                    count++;
            }
        }
    }
    printf("%d\n", count);
}
int getGCD(int* a, int* b)
{
    int res;
    for(int i=1; i<=*a && i<=*b; i++)
    {
        if(*a%i==0 && *b%i==0)
            res=i;
    }
    return res;
}
