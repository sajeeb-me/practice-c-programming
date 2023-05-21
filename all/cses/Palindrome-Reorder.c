#include<stdio.h>
#include<string.h>

int main()
{
    char arr[100001];
    scanf("%s", arr);

    int n=strlen(arr), i, count[27];
    for(i=1; i<27; i++)
        count[i]=0;

    for(i=0; i<n; i++)
        count[arr[i]-'A'+1]++;

    int oddValue=-1, totalCharCount=0, odd=0;
    char oddChar;

    for(i=1; i<26; i++)
    {
        if(count[i]>0)
            totalCharCount++;
        if(count[i]%2!=0)
        {
            oddValue=count[i];
            oddChar=i+'A'-1;
            count[i]=0;
            odd++;
        }
    }

    if(odd>1)
    {
        printf("NO SOLUTION.\n");
        return 0;
    }

//    printf("totalCharCount = %d\n", totalCharCount);

    int j=0, remainingChar=n;
    if(oddValue!=-1)
    {
        totalCharCount-=1;
        remainingChar-=oddValue;
    }

    int l=0, r=(remainingChar/2)-1;
    char first[(remainingChar/2)+1], last[(remainingChar/2)+1];
    last[(remainingChar/2)]='\0';
    while(j!=totalCharCount)
    {
        int evenValue=-1;
        char evenChar;

        for(i=1; i<27; i++)
        {
            if(count[i]>1)
            {
                evenValue=count[i];
                evenChar=i+'A'-1;
                count[i]=0;
                break;
            }
        }
        int ii=0, jj=0;

        while(ii!=(evenValue/2))
        {
            first[l]=evenChar;
            l++;
            ii++;
        }
        while(jj!=(evenValue/2))
        {
            last[r]=evenChar;
            r--;
            jj++;
        }
        j++;
    }
    first[l]='\0';

    for(i=0; i<(remainingChar/2); i++)
        printf("%c",first[i]);
//    printf("\n");
    if(oddValue!=-1)
    {
        for(int i=1; i<=oddValue; i++)
            printf("%c",oddChar);
    }

//    printf("\n");
    for(i=0; i<(remainingChar/2); i++)
        printf("%c",last[i]);


//    for(i=1; i<27; i++)
//        if(count[i]>0)
//            printf("%c => %d \n", i+'A'-1, count[i]);
//
//    printf("oddChar = %c\n", oddChar);
//    printf("totalCharCount = %d\n", totalCharCount);
//    printf("oddValue = %d\n", oddValue);
//    printf("odd = %d\n", odd);
//    printf("remainingChar = %d\n", remainingChar);

    return 0;
}
