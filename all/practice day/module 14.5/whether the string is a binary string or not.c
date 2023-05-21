#include<stdio.h>

int main()
{
    char str[100];
    fgets(str, sizeof(str), stdin);

    int i, isBinary = 1;

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A')
        {
            isBinary = 0;
            break;
        }
    }

    if(isBinary)
        printf("Yes");
    else
        printf("No");

    return 0;
}
