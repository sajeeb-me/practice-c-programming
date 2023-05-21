#include<stdio.h>
#include<string.h>

int main()
{
    char arr[100], letter[27], new_arr[100];
    scanf("%s", arr);
    int l = strlen(arr);

    for(int i=1; i<27; i++)
        letter[i]=0;

    for(int i=0; i<l; i++)
        letter[arr[i]-'a'+1]++;

    int n=0;
    for(int i=1; i<27; i++)
        if(letter[i]>0)
        {
            for(int j=0; j<letter[i]; j++)
            {
                new_arr[n]=i+'a'-1;
                n++;
            }
        }

    new_arr[n]='\0';
    printf("%s", new_arr);
}
