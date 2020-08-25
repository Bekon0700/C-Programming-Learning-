#include<stdio.h>

int main()
{
    int N;

    scanf("%d",&N);

    while(1)
    {
        N++;
        if(N % 3 == 0)
        {
            printf("%d\n",N);

            break;
        }
    }

    return 0;
}



