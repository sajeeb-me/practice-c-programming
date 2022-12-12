#include<stdio.h>

int main()
{
    int n, i, arr[1005], num=0;
    scanf("%d", &n);

    for(i=1; i<2000; i++)
    {
        if(i%3!=0 && i%10!=3)
        {
            arr[num] = i;
            num++;
        }
    }

    printf("%d\n", arr[2]);

    return 0;
}
