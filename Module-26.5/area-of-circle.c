#include<stdio.h>
#include<math.h>

double get_area(float n);

int main()
{
    float r;
    scanf("%f", &r);

    double area = get_area(r);
    printf("%lf", area);

    return;
}
double get_area(float n)
{
    double area;
    area = 3.1416*pow(n,2);
    return area;
}
