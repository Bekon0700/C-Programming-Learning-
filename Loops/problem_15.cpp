#include<stdio.h>

int main()
{
    int N, M, d, i=1;

    scanf("%d %d",&N,&M);

    d = M;

    while(M > 0)
    {
        i = i * 10;

        M = M / 10;
    }

    int num = (N*i)+d;

    printf("%d\n",num);

    return 0;
}



