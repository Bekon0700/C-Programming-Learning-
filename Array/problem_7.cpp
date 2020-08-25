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

    for(int i=0;i<n;i++)
    {
        if(arr[i] == k)
        {
            printf("the number is in the array.\n");
            break;
        }
        else if((i+1) == n)
        {
            printf("the number is not in the array.\n");
        }
    }

    return 0;
}

