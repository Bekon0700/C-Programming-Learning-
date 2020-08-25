#include<stdio.h>

int main()
{
    char word1[100], word2[100];

    scanf("%s",word1);

    scanf("%s",word2);

    int i=0;

    while(word1[i] != '\0')
    {
        i++;
    }

    int j = 0;

    while(word2[j] != '\0')
    {
        j++;
    }

    int s = i, total_len = i+j, w=0;

    while(s != total_len)
    {
        word1[s] = word2[w];

        w++;

        s++;
    }

    word1[s] = '\0';

    puts(word1);

    return 0;
}

