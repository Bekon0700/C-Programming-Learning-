#include<stdio.h>

int main()
{
    int n,min=999,max=-1,arr[25];

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

        if(arr[i] <= min)
        {
            min = arr[i];
        }
    }

    printf("%d\n%d\n",max,min);

    return 0;
}

