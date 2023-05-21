#include<stdio.h>
#include<string.h>

void inputCode();

int main()
{
    int t;
    scanf("%d", &t);

    for(int i=0; i<t; i++)
        inputCode();

    return 0;
}
void inputCode()
{
    char num[100000];
    scanf("%s", num);
    int l = strlen(num);
    for(int i=l-1; i>=0; i--)
        printf("%c", num[i]+16);
    printf("\n");
}
