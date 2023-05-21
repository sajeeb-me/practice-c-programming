#include<stdio.h>

int getMath(int c, int a, int b);

int main()
{
    char c;
    int n1, n2;
    scanf("%c %d %d", &c, &n1, &n2);

    int result = getMath(c, n1, n2);
    if(result != 0)
        printf("%d", result);

    return 0;
}
int getMath(int c, int a, int b)
{
    int res;

    if(c=='+')
        res = a+b;
    else if(c=='*')
        res = a*b;
    else if(c=='-')
    {
        if(a>b)
            res = a-b;
        else
            res = b-a;
    }
    else if(c=='/')
    {
        if(a>b)
            res = a/b;
        else
            res = b/a;
    }
    else
    {
        printf("Please inter a valid symble (ex: + - * /)");
        return 0;
    }

    return res;
}
