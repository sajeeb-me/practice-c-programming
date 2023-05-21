#include<stdio.h>

int checkFifaYear(int x);

int main()
{
    int x;
    scanf("%d", &x);

    int result = checkFifaYear(x);
    if(result)
        printf("Yes");
    else
        printf("No");

    return 0;
}
int checkFifaYear(int x)
{
    if((x%4==0 && x%100!=0) || (x%100==0 && x%400==0))
        return 1;
    else
        return 0;
}
