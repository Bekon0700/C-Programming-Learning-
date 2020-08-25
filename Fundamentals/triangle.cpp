#include<stdio.h>
#include <math.h>

int main()
{
    int side1, side2, side3;

    scanf("%d %d %d",&side1,&side2,&side3);

    // p for half of the perimeter
    double p, area, t;

    p = ((double)side1 + (double)side2 + (double)side3) / 2;

    t = p * (p-(double)side1) * (p-(double)side2) * (p-(double)side3);

    area = sqrt(t);

    printf("%.3lf\n",area);

    return 0;
}
