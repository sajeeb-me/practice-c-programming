#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i;
    scanf("%d", &n);
    int* ptr;
    //    ptr = (int*)malloc(n*sizeof(int));
    ptr = (int*)calloc(n, sizeof(int));

    if(ptr==NULL)
    {
        printf("Memory allocation failed.\n");
    }
    else
    {
        for(i=0; i<n; i++)
            scanf("%d", (ptr+i));

        for(i=0; i<n; i++)
            printf("%dth element is: %d\n", i, *(ptr+i));
    }

//    ptr = realloc(ptr, (n+5)*sizeof(int));

    free(ptr);

    return 0;
}
