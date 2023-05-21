#include <stdio.h>

int main()
{
    int a;
    char c;

    printf("Please enter a number: ");
    // printf("%%");
    scanf("%d%c", &a, &c);

    printf("The output is: %d", a);

    return 0;
}
