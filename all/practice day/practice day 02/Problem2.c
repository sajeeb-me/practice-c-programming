#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Please type three numbers: ");
    scanf("%d%d%d", &a,&b,&c);

    if(a>b && a>c)
    {
        printf("A is bigger");
    }
    else if(b>a && b>c)
    {
        printf("B is bigger");
    }
    else if(c>a && c>b)
    {
        printf("C is bigger");
    }
    else if(b>a && b==c)
    {
        printf("B and C both are bigger");
    }
    else if(a>b && a==c)
    {
        printf("A and C both are bigger");
    }
    else if(a>c && a==b)
    {
        printf("A and B both are bigger");
    }
    else
    {
        printf("They are equal");
    }

    return ;
}
