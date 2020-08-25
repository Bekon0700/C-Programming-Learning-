#include<stdio.h>

int main()
{
    int n,k,l,arr[25];

    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    scanf("%d %d",&k,&l);

    int p = n-1;

    for(int i=p;i>=0;i--)
    {
        if(i != k && i > k)
        {
            arr[i+1] = arr[i];
        }
        else if(i == k)
        {
            arr[i+1] = arr[i];
            arr[i] = l;
        }
        else if(n == k)
        {
            arr[k] = l;
        }
        else
        {
            break;
        }

    }


    for(int i = 0; i<=n; i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\n");

    return 0;
}
