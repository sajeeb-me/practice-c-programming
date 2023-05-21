#include<stdio.h>

int main()
{
    int a,b,quotient,remainder;
    printf("Input numerator : ");
    scanf("%d", &a);
    printf("Input denominator : ");
    scanf("%d", &b);

    quotient=a/b;
    remainder=a%b;
    printf("quotient = %d\n",quotient);
    printf("remainder = %d\n",remainder);

    return 0;
}
