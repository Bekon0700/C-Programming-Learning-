#include<stdio.h>

int main()
{
    int N, i=1;

    scanf("%d",&N);

    while(i != 11)
    {
        printf("%d X %d = %d\n",N,i,N*i);

        i++;
    }

    return 0;
}


