#include<stdio.h>

int main()
{
    int n1,n2,n3,arr1[25],arr2[25],arr3[25];

    scanf("%d",&n1);

    for(int i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);
        arr3[i] = arr1[i];
    }

    scanf("%d",&n2);

    for(int i=0;i<n2;i++)
    {
        scanf("%d",&arr2[i]);
        arr3[n1+i] = arr2[i];
    }

    n3 = n1+n2;

    for(int i=0;i<n3;i++)
    {
        printf("%d ",arr3[i]);
    }

    printf("\n");

    return 0;
}

