#include<stdio.h>
#include<string.h>

void broken_keyboard(int l,char arr[]);

int main()
{
    char arr[1000];
    scanf("%s", arr);
    int l = strlen(arr);

    broken_keyboard(l,arr);
    return 0;
}
void broken_keyboard(int l,char arr[])
{
    for(int i=0; i<l; i++)
    {
        if(i%2==1)
            for(int j=0; j<2; j++)
                printf("%c", arr[i]);

        else
            printf("%c", arr[i]);
    }
}
