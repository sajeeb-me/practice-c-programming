#include<stdio.h>

char get_grade(int mark);

int main()
{
    int mark;
    printf("Please enter the mark: ");
    scanf("%d", &mark);

    char grade = get_grade(mark);
    if(grade != 'X')
        printf("Grade is: %c ", grade);
    else
        printf("Please enter a number between 0-100");

    return 0;
}
char get_grade(int mark)
{
    if(mark>=80 && mark<=100)
        return 'A';
    else if(mark>=60 && mark<=79)
        return 'B';
    else if(mark>=40 && mark<=59)
        return 'C';
    else if(mark>=0 && mark<=39)
        return 'F';
    else
        return 'X';
}
