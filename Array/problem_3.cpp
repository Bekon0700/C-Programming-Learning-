#include<stdio.h>

int main()
{
    int n, i, arr1[25], arr2[25];

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }

    for(i=0;i<n;i++)
    {
        arr2[i] = arr1[i];
    }

    for(i=0;i<n;i++)
    {
        printf("%d ", arr1[i]);
    }

    printf("\n");

    for(i=0;i<n;i++)
    {
        printf("%d ", arr2[i]);
    }

    printf("\n");

    return 0;
}

