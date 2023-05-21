#include<stdio.h>

int find_prime(int n,int arr[]);
int checkPrime(int* num);
float find_average(int n,int arr[]);
void get_average(float* count, float* total, int* num);

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    int prime = find_prime(n,arr);
    float average = find_average(n,arr);

    printf("Prime numbers: %d\n", prime);
    printf("Average of all even integers: %.2f\n", average);

    return 0;
}
int find_prime(int n,int arr[])
{
    int i, count=0, isPrime=0;
    for(i=0; i<n; i++)
    {
        isPrime = checkPrime((arr+i));

        if(isPrime)
            count++;
    }
    return count;
}
int checkPrime(int* num)
{
    if(*num <= 1)
        return 0;

    for(int j=2; j<=*num/2; j++)
        if (*num%j==0)
            return 0;

    return 1;
}
float find_average(int n,int arr[])
{
    int i;
    float count_even=0, even_total=0;
    for(i=0;i<n;i++)
    {
        get_average(&count_even, &even_total, (arr+i));
    }
    float average = even_total/count_even;
    return average;
}
void get_average(float* count, float* total, int* num)
{
    if(*num%2==0)
    {
        *total += *num;
        *count = *count+1;
    }
}
