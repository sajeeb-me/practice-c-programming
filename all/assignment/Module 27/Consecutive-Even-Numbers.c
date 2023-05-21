#include<stdio.h>

void get_numbers(int n);

int main()
{
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++)
    {
        int n;
        scanf("%d", &n);

        get_numbers(n);
        printf("\n");
    }

    return 0;
}
void get_numbers(int n)
{
    int first_num;
    first_num = (n-12)/4;
    if(first_num%2!=0)
        printf("Not possible!");

    else
    {
        for(int i=first_num; i<=(first_num+6); i+=2)
            printf("%d ", i);
    }
}
