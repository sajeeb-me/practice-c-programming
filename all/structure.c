#include<stdio.h>
#include<string.h>

struct Student{
    int roll;
    int age;
    char name[100];
    float weight;
};

int main()
{
    int a;
    a=7;
    struct Student s1;
    struct Student s2;
//    struct Student s3 = {20,21,"Nintu Miah",62.10};
    struct Student s3 = {.name="Jani na", .age=20, .weight=50.00, .roll=21}; //Designated

    s1.roll=12;
    s1.age=24;
    strcpy(s1.name,"Sajeeb Das");
    s1.weight=75.6;

    s2.roll=22;
    s2.age=28;
    strcpy(s2.name,"Shuvo Das");
    s2.weight=65.6;


    printf("%d\n%d\n%s\n%f\n\n",s1.roll,s1.age,s1.name,s1.weight);
    printf("%d\n%d\n%s\n%f\n\n",s2.roll,s2.age,s2.name,s2.weight);
    printf("%d\n%d\n%s\n%f\n\n",s3.roll,s3.age,s3.name,s3.weight);

    return 0;
}
