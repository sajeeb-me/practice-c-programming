#include<stdio.h>

int getSum(int n);
int firstDig(int n);
int lastDig(int n);

int main()
{
    int n;
    scanf("%d", &n);

    int x = getSum(n);
    printf("Sum = %d", x);

    return 0;
}
int getSum(int n)
{
    int i, arr[n], sum=0;
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++)
    {
        sum += (firstDig(arr[i])+lastDig(arr[i]));
//        printf("first %d + last %d = %d, %d\n", firstDig(arr[i]), lastDig(arr[i]), (firstDig(arr[i])+lastDig(arr[i])), sum);
    }

    return sum;
}
int firstDig(int n)
{
    while(n>=10)
        n /= 10;

    return n;
}
int lastDig(int n)
{
    n = n%10;
}
