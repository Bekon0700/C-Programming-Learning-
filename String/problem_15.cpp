#include<stdio.h>

int main()
{
    char word1[50], arr[50];

    gets(word1);

    int i=0, count=0;

    while(word1[i] != '\0')
    {
        if(word1[i] == ' ')
        {
            count++;        }

        i++;
    }

    printf("%d\n",count+1);

    return 0;
}
