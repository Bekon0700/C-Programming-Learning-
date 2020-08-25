#include<stdio.h>

int main()
{
    char word1[20], word2[20];

    scanf("%s",word1);

    int i=0;

    while(word1[i] != '\0')
    {
        word2[i] = word1[i];

        i++;
    }

    word2[i] = '\0';

    printf("%s\n",word2);

    return 0;
}


