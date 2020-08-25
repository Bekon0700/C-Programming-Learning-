#include<stdio.h>

int main()
{
    int n,temp, arr[20];

    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    // bubble sort
    for(int i=0;i<n; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int i=0; i<n-1; i++)
    {
        int d = i+1;

        for(int j=d; j<n; j++)
        {
            if(arr[i] == arr[j])
            {
                int k=0;

                for(k=j; k<n; k++)
                {
                    arr[k] = arr[k+1];
                }

                arr[k] = '\0';

                n--;
            }
        }
    }

    for(int i=0; i<n-1; i++)
    {
        int d = i+1;

        for(int j=d; j<n; j++)
        {
            if(arr[i] < arr[j])
            {
                printf("%d %d, ",arr[i], arr[j]);
            }
        }
    }

    printf("\n");

    return 0;
}


