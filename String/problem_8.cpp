#include<stdio.h>

int main()
{
    char word[50];

    scanf("%s",word);

    int i=0;

    while(word[i] != '\0')
    {
        word[i] = word[i] + 32;

        i++;
    }

    printf("%s\n",word);

    return 0;
}
