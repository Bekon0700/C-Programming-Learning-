#include<stdio.h>

int main()
{
    int N, X, A=0;

    scanf("%d",&N);


    while(1)
    {
        N = N / 2;

        A++;

        if(N % 2 != 0)
        {
            printf("%d %d\n",N,A);

            break;
        }
    }

    return 0;
}




