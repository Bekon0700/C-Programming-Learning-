#include<stdio.h>

int main()
{
    int N, mid;

    scanf("%d",&N);

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

    return 0;
}


