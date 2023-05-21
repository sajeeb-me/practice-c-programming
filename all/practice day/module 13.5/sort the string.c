#include<stdio.h>
#include<string.h>

int main()
{
    char string[1000];

    fgets(string, sizeof(string), stdin);

    int l = strlen(string);

    printf("%d\n", l);

    puts(string);

    return 0;
}
