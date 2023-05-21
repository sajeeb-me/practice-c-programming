#include<stdio.h>

int main()
{
    int i,j,n,p;
    scanf("%d",&n);

    int solved = 0;
    for(i=0;i<n;i++)
    {
        int counter = 0;
        for(j=0;j<3;j++)
        {
            scanf("%d", &p);
            counter += p;
        }
        if(counter>=2)
            solved++;
    }
    printf("%d", solved);

    return 0;
}
