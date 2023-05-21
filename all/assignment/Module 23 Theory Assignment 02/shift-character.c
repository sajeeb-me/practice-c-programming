#include<stdio.h>
#include<string.h>

void shift_char(char arr[], int n, int l);

int main()
{
    char arr[100];
    int n;
    scanf("%s %d", arr, &n);

    int l = strlen(arr);

    shift_char(arr,n,l);

    printf("%s", arr);

    return 0;
}
void shift_char(char arr[], int n, int l)
{
    for(int i=0; i<l; i++)
    {
        if(arr[i]+n>122)
            arr[i] = arr[i]+n-26;
        else
            arr[i] += n;
    }
}
