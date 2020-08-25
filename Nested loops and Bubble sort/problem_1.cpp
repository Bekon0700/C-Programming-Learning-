#include<stdio.h>

int main()
{
    int N,M;

    scanf("%d %d",&N,&M);

    for(int row=1; row<=N; row++)
    {
        for(int col=1; col<=M; col++)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}
