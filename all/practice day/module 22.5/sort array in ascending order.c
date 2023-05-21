#include<stdio.h>

void get_assending_order(int n, int num[]);

int main()
{
    int i, n;
    scanf("%d", &n);
    int num[n];
    for(i=0;i<n;i++)
    {
        scanf("%d", &num[i]);
    }

    get_assending_order(n, num);

    return 0;
}
void get_assending_order(int n, int num[])
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(num[i]>num[j])
            {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        printf("%d ", num[i]);
    }
}
