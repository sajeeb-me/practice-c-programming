#include<stdio.h>

int main()
{
    int i;
    int arr[]={1,2,3,4,5};
    for(i=0;i<5;i++)
    {
        printf("%p\n", &arr[i]);
    }

//    float a,b,c;
//    printf("%p\n", &a);
//    printf("%p\n", &b);
//    printf("%p\n", &c);

    return 0;
}
