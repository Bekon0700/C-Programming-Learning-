#include<stdio.h>

int main()
{
    int x, y, sum=0, arr[10];

    scanf("%d %d",&x, &y);

    for(int i=x; i<=y; i++)
    {
        int k, t=0, x=i;
        while(x>0)
        {
            k = x%10;
            t = t + k;
            x = x/10;
        }

        sum = sum + t;
    }

    printf("%d \n",sum);

    return 0;
}
