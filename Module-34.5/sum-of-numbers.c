#include<stdio.h>

int main()
{
    FILE* inputFile;
    FILE* outputFile;
    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "w");
    if(inputFile == NULL)
    {
        printf("No input file.\n");
        return 0;
    }

    int n, sum=0;
    fscanf(inputFile, "%d", &n);

    for(int i=0; i<n; i++)
    {
        int num;
        fscanf(inputFile, "%d", &num);
        sum += (num%10);
    }
    fprintf(outputFile, "Sum = %d", sum);

    return 0;
}
