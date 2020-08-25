
#include<stdio.h>

int main()
{
    int n,i,arr[25],arr_odd[25],arr_even[25],even_sum=0,odd_sum=0;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int e=0,o=0;

    for(i=0;i<n;i++)
    {
        if(arr[i]%2 == 0)
        {
            arr_even[e] = arr[i];

            even_sum = even_sum + arr[i];

            e++;
        }
        else if(arr[i]%2 != 0)
        {
            arr_odd[o] = arr[i];

            odd_sum = odd_sum + arr[i];

            o++;
        }
    }

    for(i=0;i<e;i++)
    {
        printf("%d ",arr_even[i]);
    }

    printf("\n%d\n",even_sum);

    for(int j=0;j<o;j++)
    {
        printf("%d ",arr_odd[j]);
    }

    printf("\n%d\n",odd_sum);

    return 0;
}
