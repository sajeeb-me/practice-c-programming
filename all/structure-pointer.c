#include<stdio.h>

struct Student
{
    double weight;
    int roll;
};

int main()
{
    struct Student s={.roll=20, .weight=20.52};
    struct Student s2={.roll=20, .weight=20.52};
    struct Student* sp;

    sp=&s;
//    printf("%d\n", sizeof(struct Student));
//    printf("%p\n%p\n", sp, &s2);
//    printf("%d\n%lf\n", s.roll, s.weight);
    printf("%d\n%lf\n", sp->roll, sp->weight);
    return 0;
}

