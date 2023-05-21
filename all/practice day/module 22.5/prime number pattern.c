#include<stdio.h>

void prime_pattern(int n);

int main()
{
    int n;
    scanf("%d", &n);

    prime_pattern(n);

    return 0;
}
void prime_pattern(int n)
{
    int i, j, k, count=0, x=3;

    printf("2\n");
    for(i=1; i<n; i++)
    {
        while(count<i)
        {
            int is_prime = 1;
            for(k=2; k<x; k++)
            {
                if(x%k == 0)
                {
                    is_prime = 0;
                    x++;
                    break;
                }
            }
            if(is_prime)
            {
                printf("%d ", j);
                count++;
                x++;
            }
        }
        printf("\n");
    }
}
