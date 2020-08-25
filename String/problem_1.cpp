#include<stdio.h>

int main()
{
    char word[20];

    scanf("%s",word);

    int i=0;

    while(word[i]!='\0')
    {
        i++;
    }

    printf("%d\n",i);

    return 0;
}
