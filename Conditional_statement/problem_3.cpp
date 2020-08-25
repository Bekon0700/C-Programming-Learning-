#include<stdio.h>

int main()
{
    int num;

    scanf("%d",&num);

    if(num == 0)
    {
        printf("0\n");
    }
    else if(num > 0)
    {
        printf("positive number.\n");
    }
    else
    {
        printf("negative number.\n");
    }

    return 0;
}


