#include<stdio.h>

int main()
{
    int n,temp, count=0, arr[20];

    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    // bubble sort
    int i;
    for(i=0;i<n; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];

                arr[j] = arr[j+1];

                arr[j+1] = temp;

                count++;
            }
        }
    }

    printf("%d\n",count);

    return 0;
}

