#include<stdio.h>

int findUnique(int n, char arr[]);

int main()
{
    int n;
    scanf("%d", &n);
    char arr[n];
    for(int i=0; i<=n; i++)
        scanf("%c", &arr[i]);

    int result = findUnique(n, arr);
    printf("%d", result);

    return 0;
}
int findUnique(int n, char arr[])
{
    int new[27], unique=0;
    for(int i=1; i<27; i++)
        new[i]=0;

    for(int i=0; i<=n; i++)
        new[arr[i]-'a'+1]++;

    for(int i=1; i<27; i++)
    {
        if(new[i]==1)
            unique++;
    }

    return unique;
}
