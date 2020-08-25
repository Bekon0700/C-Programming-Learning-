#include<stdio.h>

int main()
{
    int K, N, b;

    scanf("%d %d",&N,&K);

    if(N % K == 0)
    {
        b = (N / K);
    }
    else
    {
        // Added 1 bus for the remain passenger
        b = 1 + (N / K);
    }

    printf("%d\n",b);

    return 0;
}
