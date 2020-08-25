#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num1, num2;

    scanf("%d %d",&num1,&num2);

    int diff = abs(num1 - num2);

    printf("%d\n",diff);

    return 0;
}
