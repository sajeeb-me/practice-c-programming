#include<stdio.h>
#include<string.h>

void change_cases(int l, char arr[]);

int main()
{
    char arr[1000];
    gets(arr);
    const l = strlen(arr);

    change_cases(l, arr);

    return 0;
}
void change_cases(int l, char arr[])
{
    int i;

    for(i=0; i<l; i++)
    {
        if(arr[i]>'Z')
            arr[i] -= 32;
        else
            arr[i] += 32;
    }

    puts(arr);
}
