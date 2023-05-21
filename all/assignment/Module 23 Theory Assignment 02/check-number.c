#include<stdio.h>
#include<string.h>

void check_number(int l, char numbers[]);

int main()
{
    char numbers[1000];
    scanf("%s", numbers);
    int l = strlen(numbers);

    check_number(l, numbers);

    return 0;
}
void check_number(int l, char numbers[])
{
    int i, one=0, nine=0, seven=0;
    for(i=0;i<l;i++)
    {
        if(numbers[i]=='1')
            one = 1;
        else if(numbers[i]=='9')
            nine = 1;
        else if(numbers[i]=='7')
            seven = 1;
    }
    if(one && nine && seven)
        printf("Yes");
    else
        printf("No");
}
