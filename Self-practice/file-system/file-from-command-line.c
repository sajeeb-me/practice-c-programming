#include<stdio.h>

int main()
{
    FILE* inputFile;
    FILE* outputFile;
    FILE* logFile;
    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "w");
    logFile = fopen("log.txt", "a");
    if(inputFile == NULL)
    {
        fprintf(logFile, "No file found at 12.05 am.\n");
        return 0;
    }

    int n, sum=0;
    fscanf(inputFile, "%d", &n);
    for(int i=0;i<n;i++)
    {
        int num;
        fscanf(inputFile, "%d", &num);
        sum += num;
    }
    fprintf(outputFile, "Sum = %d", sum);

    fclose(inputFile);
    fclose(outputFile);
    fclose(logFile);
    return 0;
}
