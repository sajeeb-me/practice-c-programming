#include <stdio.h>

int main()
{
    int a,b;
    printf("Please enter two number: ");
    scanf("%d%d", &a,&b);

    if(a>b)
    {
        printf("A is bigger");
    }
    else if(b>a)
    {
        printf("B is bigger");
    }
    else
    {
        printf("They are equal");
    }

    return 0;
}
