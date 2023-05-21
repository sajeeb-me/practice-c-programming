#include<stdio.h>

int get_factorial(int n);
int get_ratio(int a, int b);

int main()
{
    int n, a,b;
    printf("Enter a number to get factorial: ");
    scanf("%d", &n);

    int fact = get_factorial(n);
    printf("Factorial of %d = %d\n", n,fact);

    printf("Enter two numbers to get ratio: ");
    scanf("%d %d", &a, &b);

    int ratio = get_ratio(a ,b);
    printf("Ratio = %d\n",ratio);

    return 0;
}
int get_factorial(int n)
{
    int i, fact = 1;
    for(i=n;i>0;i--)
        {
            fact *= i;
        }
    return fact;
}
int get_ratio(int a, int b)
{
    return get_factorial(a)/get_factorial(b);
}
