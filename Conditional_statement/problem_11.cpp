#include<stdio.h>
#include<math.h>

int main()
{
    int x1, y1, x2, y2;

    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);

    double dis_1, dis_2;

    double d1 = pow((double)x1, 2) + pow((double)y1, 2);
    dis_1 = sqrt(d1);

    double d2 = pow(double(x2), 2) + pow(double(y2), 2);
    dis_2 = sqrt(d2);

    if(dis_1 < dis_2)
    {
        printf("%d %d\n", x1, y1);
    }
    else
    {
        printf("%d %d\n", x2, y2);
    }

    return 0;
}
