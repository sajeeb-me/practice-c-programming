#include <stdio.h>

int main()
{
    int i,num, sum=0;
    printf("Please enter a number: ");
    scanf("%d", &num);

    for(i=1; i<=num; i++)
    {
        printf("%d\n", i);
        sum = sum+i;
    }
    printf("%d", sum);

    return 0;
}
