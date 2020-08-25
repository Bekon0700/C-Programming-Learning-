#include<stdio.h>

int main()
{
    int B, P, mul=1, i;

    scanf("%d %d",&B,&P);

    for(i=1;i<=P;i++)
    {
        mul = mul * B;
    }

    printf("%d\n",mul);

    return 0;
}

