#include<stdio.h>

int main()
{
    char s;
    scanf("%c", &s);
    int a,b,result;
    scanf("%d%d", &a, &b);

    if(s=='+')
        result = a+b;
    else if(s=='-')
        result = a-b;
    else if(s=='*')
        result = a*b;
    else
        result = a/b;

    printf("%d", result);

    return 0;
}
