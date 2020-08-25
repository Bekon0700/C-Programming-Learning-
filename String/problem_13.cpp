#include<stdio.h>

int main()
{
    char word1[50];

    int vowel=0, consonent=0;

    scanf("%s",word1);

    int i=0;

    while(word1[i] != '\0')
    {
        if((word1[i] == 'a' || word1[i] == 'A') || (word1[i] == 'e' || word1[i] == 'E') || (word1[i] == 'i' || word1[i] == 'I') || (word1[i] == 'o' || word1[i] == 'O') || (word1[i] == 'u' || word1[i] == 'U'))
        {
            for(int j=i;word1[j] != '\0';j++)
            {
                word1[j] = word1[j+1];
            }
        }

        i++;
    }

    printf("%s\n",word1);

    return 0;
}



