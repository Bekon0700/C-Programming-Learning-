#include<stdio.h>

int main()
{
    int N, i, mul=1;

    scanf("%d",&N);

    for(i=N;i>=1;i--)
    {
        mul = mul*i;
    }

    printf("%d\n",mul);

    return 0;
}

