#include<stdio.h>

int main()
{
    int N;

    scanf("%d",&N);

    int k = N;

    for(int row=1; row<=N; row++)
    {
        for(int col=1; col<=row-1; col++)
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



