#include<stdio.h>

int main()
{
    char word1[50];

    int vowel=0, consonent=0;

    gets(word1);

    int i=0;

    while(word1[i] != '\0')
    {
        if((word1[i] == 'a' || word1[i] == 'A') || (word1[i] == 'e' || word1[i] == 'E') || (word1[i] == 'i' || word1[i] == 'I') || (word1[i] == 'o' || word1[i] == 'O') || (word1[i] == 'u' || word1[i] == 'U'))
        {
            vowel++;
        }
        else if(word1[i] == ' '){}
        else
        {
            consonent++;
        }

        i++;
    }

    printf("Vowels: %d\nConsonents: %d\n",vowel,consonent);

    return 0;
}



