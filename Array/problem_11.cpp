#include<stdio.h>

int main()
{
    int n,arr[25],sum,flag;

    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    sum = arr[0];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[i]<arr[j])
            {
                flag = 0;
                break;
            }
            else
            {
                flag = 1;
            }
        }

        if(flag == 1)
        {
            sum = sum + arr[i];
        }
    }

    printf("%d\n",sum);

    return 0;
}

