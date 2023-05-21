#include<stdio.h>
#include<string.h>

void str_concat(int n);

int main()
{
    int n;
    scanf("%d", &n);

    str_concat(n);

    return 0;
}
void str_concat(int n)
{
    int i;
    char arr1[500], arr2[500];

    for(i=0; i<n; i++)
    {
        scanf("%s", arr2);
        strcat(arr1,arr2);

        int l = strlen(arr1);
        arr1[l]=' ';
    }

    puts(arr1);
}
