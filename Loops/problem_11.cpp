#include<stdio.h>

int main()
{
    int N, f=1;

    scanf("%d",&N);

    while(N!=0)
    {
        f = f*N;

        N--;
    }

    printf("%d\n",f);

    return 0;
}

