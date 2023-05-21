#include <stdio.h>

int main()
{
    int x,y;
    printf("Please enter the value of X and Y: ");
    scanf("%d%d", &x,&y);

    if(x+y>=100)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
