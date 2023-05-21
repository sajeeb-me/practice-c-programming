#include<stdio.h>

int main()
{
    int i, v=0, c=0;
    char str[1000];

    fgets(str, sizeof(str), stdin);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ' && str[i]!='\n')
        {
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
            {
                v++;
            }
            else
            {
                c++;
            }
        }
    }

    printf("Vowel - %d\n", v);
    printf("Consonant - %d", c);

    return 0;
}
