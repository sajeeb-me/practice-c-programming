#include<stdio.h>

int get_min_amount(int a, int b);

int main()
{
    int t, a, b;
    scanf("%d", &t);

    for(int i=0; i<t; i++)
    {
        scanf("%d %d", &a, &b);
        int ans = get_min_amount(a,b);
        printf("%d\n", ans);
    }

    return 0;
}
int get_min_amount(int a, int b)
{
    int count=1;

    if(a==0)
        return count;
    else
    {
        count += a+(b*2);
        return count;
    }
}
