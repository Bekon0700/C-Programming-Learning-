#include<stdio.h>

int main()
{
    int N;

    scanf("%d",&N);

    int k = N-1;

    for(int row=1; row<=N; row++)
    {
        for(int col=1; col<=N-row; col++)
        {
            printf(" ");
        }

        for(int col=1; col<=row+(row-1); col++)
        {
            printf("*");
        }

        printf("\n");

    }

    for(int row=1; row<=k+2; row++)
    {
        for(int col=1; col<=row; col++)
        {
            printf(" ");
        }

        for(int col=1; col<=k+(k-1); col++)
        {
            printf("*");
        }

        k--;

        printf("\n");
    }


    return 0;
}



