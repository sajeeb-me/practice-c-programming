#include<stdio.h>
#include<string.h>

void decending_order(int l, char arr[]);

int main()
{
    char arr[1000];
    scanf("%s", arr);
    int l = strlen(arr);

    decending_order(l,arr);

    puts(arr);

    return 0;
}
void decending_order(int l, char arr[])
{
    for(int i=0; i<l; i++)
    {
        for(int j=i+1; j<l; j++)
        {
            if(arr[i]<arr[j])
            {
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
