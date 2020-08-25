#include<stdio.h>

int main()
{
    int n,arr[25], max=-1, min=-1;

    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i] >= max)
        {
            max = arr[i];
        }
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i] < max && arr[i] >= min)
        {
            min = arr[i];
        }
    }

    printf("%d\n",min);

    return 0;
}

