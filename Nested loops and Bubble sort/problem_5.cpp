#include<stdio.h>

int main()
{
    int N;

    scanf("%d",&N);

    int k = N;

    for(int row=1; row<=N; row++)
    {
        for(int col=1; col<=N-k; col++)
        {
            printf(" ");
        }

        k--;

        for(int col=1; col<=(N-row)+1; col++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}



