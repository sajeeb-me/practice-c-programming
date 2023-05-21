#include<stdio.h>

int main()
{
    int i,j,n;
    scanf("%d",&n);
    if(n%2==0){
        printf("Please enter an odd number.");
    }
    else{
        for(j=1;j<=(n/2);j++)
        {

                for(i=0;i<(n/2)-i;i++){
                    printf("#");
                }
                for(i=0;i<(n/2);i+=2){
                    printf("*");
                }
                for(i=0;i<(n/2)-i;i++){
                    printf("#");
                }
                printf("\n");

        }
        for(i=1;i<=n;i++)
                printf("*");
    }

    return 0;
}
