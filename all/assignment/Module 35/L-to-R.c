#include<stdio.h>

void lToR();

int main()
{
    int t;
    scanf("%d", &t);

    for(int i=0; i<t; i++)
        lToR();

    return 0;
}
void lToR()
{
    int a,b;
    scanf("%d %d", &a, &b);

    for(int i=a; i<=b; i++)
    {
        int flag=1;
        for(int j=2; j<i; j++)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1 && i!=0)
            printf("%d ", i);
    }
    printf("\n");
}
