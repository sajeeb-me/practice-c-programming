#include<stdio.h>
#include<string.h>

void is_binary(int l, char arr[]);

int main()
{
    char arr[100];
    gets(arr);
    int l = strlen(arr);

    is_binary(l, arr);

    return 0;
}
void is_binary(int l, char arr[])
{
    int i;
    for(i=0;i<l;i++)
    {
        if(arr[i]>='A')
        {
            printf("No");
            return;
        }
    }
    printf("Yes");
}
