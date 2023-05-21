#include<stdio.h>

int main()
{
    int a, i;
    scanf("%d", &a);
    char letters[101], output[a];

    for(i=0;i<a;i++)
    {
        scanf("%s", letters);
        printf("%s ", letters);
    }


    return 0;
}
