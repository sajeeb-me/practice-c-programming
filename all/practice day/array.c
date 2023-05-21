#include<stdio.h>

int main()
{
    int i,N;
    scanf("%d", &N);
    int arr[N];

    for(i=0;i<N;i++)
    {
        scanf("%d", &arr[i]);
    }

    int min = arr[0];
    int sec_smallest = arr[1];

    for(i=0;i<N;i++)
    {
        if(min>arr[i])
            min=arr[i];
    }
    printf("Smallest number is: %d\n", min);

    // second smallest
    for(i=0;i<N;i++)
    {
        if(arr[i] != min & arr[i]<sec_smallest)
            sec_smallest = arr[i];
    }
    printf("Second smallest number is: %d", sec_smallest);

    return 0;
}
