#include<stdio.h>

int main()
{
    int n,k,arr[25];

    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    scanf("%d",&k);

    if(k == (n-1))
    {
        for(int i=0;i<k;i++)
        {
            printf("%d ",arr[i]);
        }
    }
    else
    {
        for(int i=k;i<n;i++)
        {
            arr[i] = arr[i+1];
        }

        for(int i=0;i<(n-1);i++)
        {
        printf("%d ",arr[i]);
        }
    }



    printf("\n");

    return 0;
}
