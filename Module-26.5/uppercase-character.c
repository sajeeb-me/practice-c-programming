#include<stdio.h>
#include<string.h>

void make_uppercase(int l, char arr[]);

int main()
{
    char arr[100];
    scanf("%s", arr);
    int l = strlen(arr);

    make_uppercase(l,arr);
    printf("%s", arr);

    return 0;
}
void make_uppercase(int l, char arr[])
{
    int i;
    for(i=0;i<l;i++)
    {
        if(arr[i]%2==0)
            arr[i] -= 32;
    }
}
