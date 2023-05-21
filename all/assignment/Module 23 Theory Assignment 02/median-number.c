#include<stdio.h>

float median_num(int n, int num[]);
void sort_arr(int n, int num[]);

int main()
{
    int i, n, num[1001];
    printf("Please type the number of elements : ");
    scanf("%d", &n);
    printf("Please type the elements: ");
    for(i=0;i<n;i++)
        scanf("%d", &num[i]);

    float ans = median_num(n,num);
    printf("Median number is: %f.", ans);

    return 0;
}
float median_num(int n, int num[])
{
    float median;
    sort_arr(n, num);

    if(n%2 != 0)
        median = num[n/2];
    else
        median = (num[n/2]+num[(n/2)-1])/2;

    return median;
}
void sort_arr(int n, int num[])
{
    int i,j,temp;

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(num[i]>num[j])
            {
                temp = num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
}
