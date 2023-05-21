#include<stdio.h>

int add_three_nums(int a, int b, int c);

int main()
{
    int x,y,z;
    scanf("%d %d", &x, &y);

    int sum = add_three_nums(x,y, z=0);
    printf("%d\n", sum);

    return 0;
}
int add_three_nums(int a, int b, int c)
{
	return a+b+c;
}
