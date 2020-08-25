#include<stdio.h>

int main()
{
    int N, sum=0;

    scanf("%d",&N);

    while(N!=0)
    {
        if(N % 2 != 0)
        {
            sum = sum + N;
        }
        N--;
    }

    printf("%d\n",sum);

    return 0;
}

