#include<stdio.h>
#include<string.h>

int main()
{
    int i;
    char arr[100];
    gets(arr);

    for(i=0; i<strlen(arr); i++)
    {
        if(arr[i]!=arr[i+1])
        {
            printf("%c", arr[i]);
        }
    }

    return 0;
}
