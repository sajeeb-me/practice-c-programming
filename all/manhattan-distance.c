#include<stdio.h>

struct Point
{
    float x;
    float y;
};

int manhattan(struct Point a, struct Point b)
{
    int result =abs(a.x-b.x)+abs(a.y-b.y);
    return result;
}

struct Point mid(struct Point a, struct Point b)
{
    struct Point ans;
    ans.x = (a.x+b.x)/2;
    ans.y = (a.y+b.y)/2;
    return ans;
};

int main()
{
    struct Point p1, p2;

    scanf("%f %f", &p1.x, &p1.y);
    scanf("%f %f", &p2.x, &p2.y);

//    int ans = manhattan(p1,p2);
//    printf("%d", ans);

    struct Point p3;
    p3 = mid(p1,p2);

    printf("%.2f, %.2f\n",p3.x,p3.y);

    return 0;
}
