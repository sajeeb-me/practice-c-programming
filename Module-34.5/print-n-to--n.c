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

    for(int i=0; i<n; i++)
    {
        int num;
        fscanf(inputFile, "%d", &num);
        if(num>=0)
        {
            for(int j=num; j>=-num; j--)
                fprintf(outputFile, "%d ", j);

            fprintf(outputFile, "\n");
        }
        else
        {
            for(int j=num; j<=-num; j++)
                fprintf(outputFile, "%d ", j);

            fprintf(outputFile, "\n");
        }
    }
    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
