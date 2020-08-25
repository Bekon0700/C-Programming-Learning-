#include<stdio.h>

int main()
{
    int B, P, mul=1;

    scanf("%d %d",&B,&P);

    while(P!=0)
    {
        mul = mul*B;

        P--;
    }

    printf("%d\n",mul);

    return 0;
}

