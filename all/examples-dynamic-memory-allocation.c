#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,n;
    n=5;
    int* ptr;
    ptr=(int*)malloc(n*sizeof(int));
    printf("%p\n", ptr);

    if(ptr==NULL)
        printf("Memory Allocation Failed.\n");

    else
    {
        for(i=0; i<n; i++)
            scanf("%d", (ptr+i));
        for(i=0; i<n; i++)
            printf("%d, ", *(ptr+i));
        printf("\n");
    }

    n=10;
    ptr= realloc(ptr, n*sizeof(int));
    printf("%p\n", ptr);

    if(ptr==NULL)
        printf("Memory Allocation Failed.\n");

    else
    {
        for(i=5; i<n; i++)
            scanf("%d", (ptr+i));
        for(i=0; i<n; i++)
            printf("%d, ", *(ptr+i));
        printf("\n");
    }

    free(ptr);
    return 0;
}
