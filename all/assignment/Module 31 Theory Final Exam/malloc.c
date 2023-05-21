#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int* new;
    new = (int*)malloc(n*sizeof(int));

    if(new==NULL)
        printf("Memory Allocation Failed!\n");
    else
    {
        for(int i=0;i<n;i++)
            scanf("%d", (new+i));

        for(int i=0;i<n;i++)
            printf("%d, ", *(new+i));
    }

    free(new);

    return 0;
}
