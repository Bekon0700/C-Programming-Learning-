#include<stdio.h>

int main()
{
    int n,k,arr[25], count=0;

    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    scanf("%d",&k);

    for(int i=0;i<n;i++)
    {
        if(arr[i] == k)
        {
            count++;
        }
    }

    printf("%d\n",count);

    return 0;
}

