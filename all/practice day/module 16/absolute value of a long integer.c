#include<stdio.h>
#include<stdlib.h>

int main()
{
    long int a,b;
    printf("Input 1st number (positive or negative) : ");
    scanf("%ld", &a);
    printf("Input 2nd number (positive or negative) : ");
    scanf("%ld", &b);

    printf("%ld,%ld", labs(a),labs(b));

    return 0;
}
