#include<stdio.h>

int main()
{
    char word[100];

    scanf("%s",word);

    int a=0, d=0, s=0, j=0;

    while(word[j] != '\0')
    {
        if((word[j] >= 'A' && word[j] <= 'Z') || (word[j] >= 'a' && word[j] <= 'z'))
        {
            a++;
        }
        else if((word[j] >= '0') && (word[j] <= '9'))
        {
            d++;
        }
        else
        {
            s++;
        }

        j++;
    }

    printf("Alphabet : %d\nDigit : %d\nSpecial : %d\n",a,d,s);

    return 0;
}

