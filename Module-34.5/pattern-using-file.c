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

    int n;
    fscanf(inputFile, "%d", &n);

    for(int i=1; i<=n; i++)
    {
        for(int j=n-i; j>0; j--)
            fprintf(outputFile," ");

        for(int j=0; j<n; j++)
            fprintf(outputFile,"#");
        fprintf(outputFile,"\n");
    }

    return 0;
}
