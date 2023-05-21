#include<stdio.h>

int seven_present(int x);
int digit_sum(int x);
int last_dig_prime(int x);

int main()
{
    int n;
    scanf("%d", &n);

    if(seven_present(n)==1 && digit_sum(n)>10 && last_dig_prime(n)==1)
        printf("%d is a Shuvo's number!\n", n);
    else
        printf("No!\n");

    return 0;
}

int seven_present(int x)
{
    while(x>0)
    {
        if(x%10 == 7)
            return 1;

        x /= 10;
    }
    return 0;
}
int digit_sum(int x)
{
    int sum = 0;
    while(x>0)
    {
        sum += (x%10);
        x /= 10;
    }
    return sum;
}
int last_dig_prime(int x)
{
    int n = x%10;
    if(n==2 || n==3 || n==5 || n==7)
        return 1;
    else
        return 0;
}
