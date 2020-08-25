#include<stdio.h>

int main()
{
    int N, i, sum=0;

    scanf("%d",&N);

    for(i=1;i<=N;i++)
    {
        if(i % 2 != 0)
        {
            sum = sum + i;
        }
    }

    printf("%d\n",sum);

    return 0;
}
