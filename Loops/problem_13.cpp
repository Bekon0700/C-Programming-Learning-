#include<stdio.h>

int main()
{
    int N, sum=0, d;

    scanf("%d",&N);

    while(N > 0)
    {
        d = N % 10;

        sum = sum + d;

        N = N / 10;
    }

    printf("%d\n",sum);

    return 0;
}

