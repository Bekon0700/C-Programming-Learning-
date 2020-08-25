#include<stdio.h>

int main()
{
    int N, X;

    scanf("%d %d",&N,&X);

    if((X == 0) || (N % X != 0))
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }

    return 0;
}
