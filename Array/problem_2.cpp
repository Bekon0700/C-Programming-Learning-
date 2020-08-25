#include<stdio.h>

int main()
{
    int n, i, arr[25], sum=0;

    double avg;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        sum = sum + arr[i];
    }

    avg = (double)sum / n;

    printf("%0.2lf\n",avg);

    return 0;
}
