#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0;

    for(int i=1; i<=3; i++)
    {
        char s = '+';
        sum += i;
    }
    for(int i=3; i<n; i++)
    {
        char s;
        if(i%3==0)
        {
            if(s=='-')
                s='+';
            else
                s = '-';
        }
        if(s=='-')
            sum -= (i+1);
        else
            sum += (i+1);
    }
    printf("%d", sum);
    return 0;
}
