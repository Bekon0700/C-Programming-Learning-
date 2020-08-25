#include<stdio.h>

int main()
{
    int N, i;

    scanf("%d",&N);

    for(i=N;i>0;i--)
    {
        printf("%d ",i);

        if(i == 1)
        {
            printf("\n");
        }
    }

    return 0;
}
