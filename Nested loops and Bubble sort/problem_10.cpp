#include<stdio.h>

int main()
{
    int n, s, temp, arr[20], flag=0;

    scanf("%d %d",&n, &s);

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
        int mid = n/2;

        int dif = s - arr[i];

        if(dif > arr[n-1] || dif < arr[0])
        {
            continue;
        }
        else if(dif >= arr[mid])
        {
            for(int j=mid; j<n; j++)
            {
                if((arr[i] + arr[j]) == s)
                {
                    printf("%d %d, ",arr[i], arr[j]);

                    int k=0;

                    for(k=i; k<n; k++)
                    {
                        arr[k] = arr[k+1];
                    }

                    arr[k] = '\0';

                    n--;

                    int p=0;

                    for(p=j; p<n; p++)
                    {
                        arr[p] = arr[p+1];
                    }

                    arr[p] = '\0';

                    n--;

                    flag = 1;

                    i--;
                }
            }
        }
        else if(dif < arr[mid])
        {
            for(int j=0; j<mid; j++)
            {
                if((arr[i] + arr[j]) == s)
                {
                    printf("%d %d, ",arr[i], arr[j]);

                    int k=0;

                    for(k=i; k<n; k++)
                    {
                        arr[k] = arr[k+1];
                    }

                    arr[k] = '\0';

                    n--;

                    int p=0;

                    for(p=j; p<n; p++)
                    {
                        arr[p] = arr[p+1];
                    }

                    arr[p] = '\0';

                    n--;

                    flag = 1;

                    i--;
                }
            }
        }
    }

    if(flag == 0)
    {
        printf("-1\n");
    }
    else
    {
        printf("\n");
    }

    return 0;
}

