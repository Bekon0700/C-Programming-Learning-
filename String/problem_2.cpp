#include<stdio.h>

int main()
{
    char word[20];

    scanf("%s",word);

    int i=0;

    while(word[i] != '\0')
    {
        printf("%c ",word[i]);

        i++;
    }

    printf("\n");

    return 0;
}
