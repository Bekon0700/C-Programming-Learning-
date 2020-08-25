#include<stdio.h>

int main()
{
    char word1[40], word2[40];

    scanf("%s",word1);

    int i=0;

    while(word1[i] != '\0')
    {
        i++;
    }

    int j = i-1, k=0;

    while(j >= 0)
    {
        word2[k] = word1[j];

        k++;

        j--;
    }

    word2[k] = '\0';

    printf("%s\n",word2);

    return 0;
}

