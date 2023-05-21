#include<stdio.h>

int main()
{
    int i,t;
    scanf("%d", &t);
    int arr[101], result[101];

    int sixtyToEighty = 40;
    int eightyToHundred = 60;

    for(i=1;i<=t;i++)
    {
        scanf("%d%%", &arr[i]);
    }

    for(i=1;i<=t;i++)
    {
        if(arr[i]<60)
        result[i]=(60-arr[i])+sixtyToEighty+eightyToHundred;
        else if (arr[i]>=60 && arr[i]<80)
            result[i]=((80-arr[i])*2)+eightyToHundred;
        else
            result[i]=(100-arr[i])*3;
    }

    for(i=1;i<=t;i++)
    {
        printf("%d minutes\n", result[i]);
    }


    return 0;
}

