#include<stdio.h>

int main()
{
    int n, i, arr[25];

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    n = n-1;

    for(i=n;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }

    printf("\n");

    return 0;
}

