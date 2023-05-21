#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if(n%4==0)
    {
        if(n%10==0)
        {
            if(n%400==0)
                printf("Yes");
            else
                printf("Not");
        }
        else
            printf("Yes");
    }
    else
        printf("Not");

    return 0;
}
