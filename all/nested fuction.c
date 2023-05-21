#include<stdio.h>

float fung(int a, int b);
float absoulate(int a);

int main()
{
    float a,b;
    scanf("%f %f", &a, &b);

    float ans = fung(a,b);

    printf("%f", ans);

    return 0;
}


float fung(int a, int b)
{
    int res;

    res = absoulate(a-3)+((b+4)*(b+4));

    return res;
}
float absoulate(int a)
{
    if(a>0)
        return a;
    else
        return (-1)*a;
}
