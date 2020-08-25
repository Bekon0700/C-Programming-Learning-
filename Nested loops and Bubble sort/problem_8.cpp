#include<stdio.h>

int main()
{
    int n, arr[10];

    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d %d, ", arr[i], arr[j]);
        }
    }

    printf("\n");

    return 0;
}
