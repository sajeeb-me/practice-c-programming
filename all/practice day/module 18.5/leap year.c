#include<stdio.h>

int main()
{
    int n, flag=1;
    scanf("%d", &n);

    if(n%4==0)
    {
        if(n%100==0)
        {
            if(n%400!=0)
                flag = 0;
        }
    }
    else
        flag = 0;

    if(flag)
        printf("Yes");
    else
        printf("No");

    return 0;
}
