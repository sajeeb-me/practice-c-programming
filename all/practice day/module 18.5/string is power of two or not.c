#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int i, n=0;
    char arr[100];
    gets(arr);

    for(i=0;i<strlen(arr);i++)
    {
        int temp = arr[i]-96;
        n += temp;
    }

    for(i=2;i<10;i++)
    {
        if(pow(2,i)==n)
        {
            printf("Yes\nCost = 2^%d", i);
            break;
        }
        else if(pow(2,i)>n)
        {
            printf("No");
            break;
        }
    }

    return 0;
}
