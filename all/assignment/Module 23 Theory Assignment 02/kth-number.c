#include<stdio.h>
#include<string.h>

int get_kth_number(int n, int k);

int main()
{
    int n,k;
    scanf("%d %d", &n, &k);

    int ans = get_kth_number(n,k);

    printf("\nThe %dth element in this sequence is %d.", k, ans);

    return 0;
}
int get_kth_number(int n, int k)
{
    int i, numbers[1000], count=0;

    for(i=2; i<=n; i+=2)
    {
        numbers[count] = i;
        count ++;
    }

    for(i=1; i<=n; i+=2)
    {
        numbers[count] = i;
        count ++;
    }

    for(i=0;i<n;i++)
        printf("%d ", numbers[i]);

    return numbers[k-1];
}
