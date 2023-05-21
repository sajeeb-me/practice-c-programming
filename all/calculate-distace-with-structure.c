#include<stdio.h>
#include<math.h>

struct Point
{
    int x;
    int y;
};

double distance(struct Point a, struct Point b)
{
    return sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2));
}

int main()
{
    struct Point p1,p2;

    scanf("%d %d", &p1.x, &p1.y);
    scanf("%d %d", &p2.x, &p2.y);

    printf("The different between them = %lf\n", distance(p1,p2));

    return 0;
}
